/*
 * Copyright (c) 2018, Intel Corporation
 * All rights reserved.
 *
 * Author:	Seppo Ingalsuo <seppo.ingalsuo@linux.intel.com>
 *		Sathish Kuttan <sathish.k.kuttan@intel.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>

#include "pdm_decim_fir.h"

static const s32_t fir_int32_04_4375_5100_010_095[211] = {
	126017,
	745791,
	1735783,
	3250059,
	4963537,
	6400069,
	6949502,
	6142229,
	3902336,
	705842,
	-2485787,
	-4540607,
	-4626085,
	-2636100,
	646448,
	3784383,
	5275090,
	4259502,
	1015665,
	-3045153,
	-5950963,
	-6099091,
	-3115593,
	1807814,
	6342508,
	8093924,
	5838000,
	296533,
	-6011752,
	-9879686,
	-9013045,
	-3339610,
	4700101,
	11152288,
	12461593,
	7387989,
	-2085667,
	-11448775,
	-15769545,
	-12252662,
	-1940150,
	10437445,
	18576639,
	17768944,
	7550319,
	-7626200,
	-20251921,
	-23428157,
	-14572076,
	2797464,
	20329234,
	28790530,
	22864155,
	4330980,
	-18201801,
	-33211863,
	-32081436,
	-13923851,
	13233081,
	35870337,
	41620943,
	25914222,
	-4896316,
	-35895437,
	-50712381,
	-40042952,
	-7212823,
	32428935,
	58525317,
	56015029,
	23582638,
	-24374765,
	-63897455,
	-73234460,
	-44550852,
	10604843,
	65540282,
	91054416,
	70624752,
	10408242,
	-61706258,
	-108584856,
	-102490195,
	-40744453,
	50090298,
	124919090,
	141743373,
	84173003,
	-26760833,
	-138851415,
	-191966143,
	-148464813,
	-16173880,
	148695193,
	262835505,
	254088691,
	100293640,
	-149816104,
	-385869984,
	-474827254,
	-315628113,
	112831849,
	731720961,
	1381072959,
	1872325415,
	2055132469,
	1872325415,
	1381072959,
	731720961,
	112831849,
	-315628113,
	-474827254,
	-385869984,
	-149816104,
	100293640,
	254088691,
	262835505,
	148695193,
	-16173880,
	-148464813,
	-191966143,
	-138851415,
	-26760833,
	84173003,
	141743373,
	124919090,
	50090298,
	-40744453,
	-102490195,
	-108584856,
	-61706258,
	10408242,
	70624752,
	91054416,
	65540282,
	10604843,
	-44550852,
	-73234460,
	-63897455,
	-24374765,
	23582638,
	56015029,
	58525317,
	32428935,
	-7212823,
	-40042952,
	-50712381,
	-35895437,
	-4896316,
	25914222,
	41620943,
	35870337,
	13233081,
	-13923851,
	-32081436,
	-33211863,
	-18201801,
	4330980,
	22864155,
	28790530,
	20329234,
	2797464,
	-14572076,
	-23428157,
	-20251921,
	-7626200,
	7550319,
	17768944,
	18576639,
	10437445,
	-1940150,
	-12252662,
	-15769545,
	-11448775,
	-2085667,
	7387989,
	12461593,
	11152288,
	4700101,
	-3339610,
	-9013045,
	-9879686,
	-6011752,
	296533,
	5838000,
	8093924,
	6342508,
	1807814,
	-3115593,
	-6099091,
	-5950963,
	-3045153,
	1015665,
	4259502,
	5275090,
	3784383,
	646448,
	-2636100,
	-4626085,
	-4540607,
	-2485787,
	705842,
	3902336,
	6142229,
	6949502,
	6400069,
	4963537,
	3250059,
	1735783,
	745791,
	126017

};

struct pdm_decim pdm_decim_int32_04_4375_5100_010_095 = {
	4, 211, 2, 4375, 5100, 10, 95, fir_int32_04_4375_5100_010_095
};
