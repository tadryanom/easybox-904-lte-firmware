/*
 * Copyright (c) 2007-2008 Atheros Communications Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */
#include "../80211core/cprecomp.h"

const u32_t zcFwImage[] = {
0x0009000B, 0x7FFC4F22, 0xD695D494, 0x0009460B,
0xD494E570, 0x4518B01E, 0x89042008, 0xD690D492,
0x462B7F04, 0xB0124F26, 0xD2900009, 0x420BD490,
0xE6000009, 0x949AD58F, 0xC8406052, 0x2F028F03,
0x8FF93642, 0x7F047601, 0x000B4F26, 0xD28A0009,
0x0009422B, 0x2FD62FC6, 0x4F222FE6, 0xD6877FEC,
0x626061F3, 0x2F208461, 0x846280F1, 0x80F27110,
0x6D438463, 0x846480F3, 0x80F46413, 0x6C538465,
0x846680F5, 0x80F6E500, 0xD77D8467, 0x846880F7,
0x80F8EE04, 0x80F98469, 0x80FA846A, 0x80FB846B,
0x80FC846C, 0x80FD846D, 0x80FE846E, 0x80FF846F,
0x6653655C, 0x7501367C, 0x665C6260, 0x242036E3,
0x74018FF6, 0x66F32F16, 0xE7107604, 0xB00D65C3,
0x6E0364D3, 0xD46B7F04, 0x420BD26B, 0x60E36503,
0x4F267F14, 0x6DF66EF6, 0x6CF6000B, 0x2FB62FA6,
0x2FD62FC6, 0x4F222FE6, 0x3F3C933A, 0x4108E141,
0x31FCE200, 0x11733526, 0x21521162, 0x11418D02,
0xE0FFA098, 0x4A18EA01, 0x262066F3, 0x32A27201,
0x76018FFB, 0x6BE3EE00, 0xE0446CF3, 0x00FE4008,
0x450BD556, 0x660361B3, 0x4008E043, 0x6DC004FE,
0x014C6063, 0x31EC3EDC, 0x60E36E1C, 0x7B0107FC,
0x2C703BA2, 0x8FE80FD4, 0xE0427C01, 0xEB004008,
0x70FC07FE, 0x6EB36CB3, 0xA0200AFE, 0x2710EDFF,
0x7C01FEE0, 0x60C36CCC, 0x657002FC, 0x6BBC3B2C,
0x01FC60B3, 0x0F1460C3, 0x0F2460B3, 0x04FC60C3,
0x342C7E01, 0x01FC604C, 0x251A62D3, 0xD43C225A,
0x2750602C, 0x064E4008, 0x2D6A4D19, 0x3EA27701,
0x66D78BDF, 0x4018E001, 0x0F646563, 0x70014519,
0x0F544629, 0x0F647001, 0x70014619, 0x90420F64,
0xE0450EFE, 0xEA014008, 0xE0460FF6, 0x4A184008,
0xED0067F3, 0x0FF637AC, 0x0FF67004, 0xE345E104,
0x7C014308, 0x6CCC33FC, 0x60C36432, 0x5531024C,
0x6BBC3B2C, 0x045C60B3, 0x60C35A32, 0x60B30A44,
0x60C30F24, 0x6A7006FC, 0x606C362C, 0x66E005FC,
0x6A5C64AC, 0x626C24AA, 0x89053420, 0x4D084D08,
0xCB0460D3, 0x600BA006, 0x7D014110, 0x8FD67701,
0xE0007E01, 0x3F3C9308, 0x6EF64F26, 0x6CF66DF6,
0x000B6BF6, 0x01386AF6, 0x00000120, 0x00200D54,
0x002002BE, 0x00102800, 0x00200D64, 0x0010F00A,
0x0010F000, 0x001C001C, 0x00103252, 0x00200DA0,
0x0010FFFC, 0x00200D7C, 0x0020032C, 0x00200370,
0x00200954, 0x0009000B, 0x2FD62FC6, 0x4F222FE6,
0x6D436C53, 0xEE00A004, 0x7E0164D4, 0x644CBFF2,
0x8BF93EC2, 0x6EF64F26, 0x000B6DF6, 0xE5006CF6,
0x6643A002, 0x76017501, 0x22286260, 0xAFE38BFA,
0x2FE60009, 0x75076253, 0xE1086753, 0x6043EE0A,
0x4409C90F, 0x650330E2, 0x8D014409, 0xE630E637,
0x4110365C, 0x8FF22760, 0xE00077FF, 0x000B8028,
0x4F226EF6, 0xBFE47FEC, 0xBFD865F3, 0x7F1464F3,
0x000B4F26, 0x4F22E000, 0xBFDA7FEC, 0x64F365F3,
0x7406BFCD, 0x4F267F14, 0xE000000B, 0x4F222FE6,
0x62537FEC, 0x65F36E43, 0x6423BFCB, 0x64E3BFBF,
0x64F3BFBD, 0xBFBAD403, 0x7F140009, 0x000B4F26,
0x00006EF6, 0x00200DB0, 0x89004011, 0x4111600B,
0x4F228906, 0x611BB004, 0x000B4F26, 0x0009600B,
0x620D2F26, 0x8F413020, 0x40180019, 0x8B0D3016,
0x31043104, 0x31043104, 0x31043104, 0x31043104,
0x890062F6, 0x4119310C, 0x6013000B, 0x41296219,
0x20084018, 0x31048927, 0x31043104, 0x31043104,
0x31043104, 0x31043104, 0x31043104, 0x31043104,
0x31043104, 0x61193104, 0x3204221D, 0x32043204,
0x32043204, 0x32043204, 0x32043204, 0x32043204,
0x32043204, 0x32043204, 0x89003204, 0x4229320C,
0x000B6023, 0xE00062F6, 0x62F6000B, 0x42286213,
0x42244129, 0x42243104, 0x42243104, 0x42243104,
0x42243104, 0x42243104, 0x42243104, 0x42243104,
0x42243104, 0x42243104, 0x42243104, 0x42243104,
0x42243104, 0x42243104, 0x42243104, 0x42243104,
0x89003104, 0x6013310C, 0x62F6000B, 0x2F262F16,
0x51F552F3, 0x52F22129, 0x52F41210, 0x212951F6,
0x121152F2, 0x000B62F6, 0x000061F6, 0x51F32F16,
0x310050F1, 0x51F48B02, 0x310050F2, 0x000B0029,
0x000061F6, 0x51F32F16, 0x310050F1, 0x51F48B06,
0x310050F2, 0xCA010029, 0x61F6000B, 0x000BE001,
0x000061F6, 0x50F0000B, 0x2F262F16, 0xE10052F2,
0x12001211, 0x000B62F6, 0x000061F6, 0x2F162F06,
0x8B264115, 0x3103E040, 0x2F26892B, 0x52F62F36,
0xE02053F5, 0x8B053103, 0xE3006233, 0x89093100,
0x3108A002, 0x8B0F2338, 0xD0064F22, 0x6023400B,
0x4F266203, 0x112151F4, 0x63F61130, 0x61F662F6,
0x60F6000B, 0x002007F4, 0x4100C709, 0x0123011D,
0x51F20009, 0x110150F4, 0x110050F3, 0x000B61F6,
0x51F260F6, 0x1101E000, 0x61F61100, 0x60F6000B,
0x01300000, 0x0128012C, 0x01200124, 0x0118011C,
0x0106010A, 0x00FE0102, 0x00E200E6, 0x00DA00DE,
0x00CC00D0, 0x00C400C8, 0x00A800AC, 0x00A000A4,
0x008C0090, 0x00840088, 0x0066006A, 0x005E0062,
0x42244300, 0x42244300, 0x42244300, 0x43286133,
0x43084318, 0x42284308, 0x42084218, 0x41094208,
0xAFAF4109, 0x4300221B, 0x43004224, 0x43004224,
0x61334224, 0x43184328, 0x42184228, 0xAFA14119,
0x4300221B, 0x43004224, 0x43004224, 0x61334224,
0x43084328, 0x42284308, 0x42084208, 0x41094119,
0xAF8F4109, 0x4300221B, 0x43004224, 0x43004224,
0x61334224, 0x212D4328, 0x6213AF84, 0x42244300,
0x42244300, 0x42244300, 0x43186133, 0x43084308,
0x42084218, 0x41294208, 0x41094109, 0x221BAF72,
0x42244300, 0x42244300, 0x42244300, 0x43186133,
0x41294218, 0xAF654119, 0x4300221B, 0x43004224,
0x43004224, 0x43004224, 0x43004224, 0x43004224,
0x43004224, 0x4224AF56, 0x2F162F06, 0x8B264115,
0x3103E040, 0x2F26892B, 0x52F62F36, 0xE02053F5,
0x8B053103, 0xE2006323, 0x89093100, 0x3108A002,
0x8B0F2228, 0xD0064F22, 0x6033400B, 0x4F266303,
0x112151F4, 0x63F61130, 0x61F662F6, 0x60F6000B,
0x002008B4, 0x4100C709, 0x0123011D, 0x51F20009,
0x110150F4, 0x110050F3, 0x000B61F6, 0x51F260F6,
0x1101E000, 0x61F61100, 0x60F6000B, 0x012E0000,
0x0126012A, 0x011E0122, 0x0116011A, 0x01040108,
0x00FC0100, 0x00E000E4, 0x00D800DC, 0x00CC00D0,
0x00C400C8, 0x00A800AC, 0x00A000A4, 0x008C0090,
0x00840088, 0x0066006A, 0x005E0062, 0x43254201,
0x43254201, 0x43254201, 0x42296123, 0x42094219,
0x43294209, 0x43094319, 0x41084309, 0xAFAF4108,
0x4201231B, 0x42014325, 0x42014325, 0x61234325,
0x42194229, 0x43194329, 0xAFA14118, 0x4201231B,
0x42014325, 0x42014325, 0x61234325, 0x42094229,
0x43294209, 0x43094309, 0x41084118, 0xAF8F4108,
0x4201231B, 0x42014325, 0x42014325, 0x61234325,
0xAF854229, 0x4201231D, 0x42014325, 0x42014325,
0x61234325, 0x42094219, 0x43194209, 0x43094309,
0x41084128, 0xAF734108, 0x4201231B, 0x42014325,
0x42014325, 0x61234325, 0x43194219, 0x41184128,
0x231BAF66, 0x43254201, 0x43254201, 0x43254201,
0x43254201, 0x43254201, 0x43254201, 0xAF574201,
0x00004325, 0x080A0C0E, 0x00020406, 0x1A1C1E20,
0x12141618, 0x2E303234, 0x26282A2C, 0x3A3C3E40,
0x6C625648, 0x41112F26, 0xE2208F18, 0x890B3123,
0x321CD204, 0xD1026220, 0x412B312C, 0x00090009,
0x0020081E, 0x002007D4, 0x000BE000, 0x400062F6,
0x40004000, 0x40004000, 0x40004000, 0x62F6000B,
0x40004000, 0x40004000, 0x40004000, 0x40184000,
0x62F6000B, 0x40004000, 0x40004000, 0x40004000,
0x40284000, 0x62F6000B, 0x40004000, 0x40184000,
0x000B4028, 0xC90F62F6, 0x40054005, 0x40054005,
0x62F6000B, 0x4005C907, 0x40054005, 0x62F6000B,
0x4005C903, 0x000B4005, 0xC90162F6, 0x000B4005,
0x000062F6, 0x080A0C0E, 0x00020406, 0x1A1C1E20,
0x12141618, 0x2E303234, 0x26282A2C, 0x3A3C3E40,
0x6C625648, 0x41112F26, 0xE2208F18, 0x890B3123,
0x321CD204, 0xD1026220, 0x412B312C, 0x00090009,
0x002008DE, 0x00200894, 0x000BE000, 0x400162F6,
0x40014001, 0x40014001, 0x40014001, 0x62F6000B,
0x40014001, 0x40014001, 0x40014001, 0x40194001,
0x62F6000B, 0x40014001, 0x40014001, 0x40014001,
0x40294001, 0x62F6000B, 0x40014001, 0x40194001,
0x000B4029, 0x400462F6, 0x40044004, 0xC90F4004,
0x62F6000B, 0x40044004, 0xC9074004, 0x62F6000B,
0x40044004, 0x000BC903, 0x400462F6, 0x000BC901,
0x000062F6, 0x00000000, 0x77073096, 0xEE0E612C,
0x990951BA, 0x076DC419, 0x706AF48F, 0xE963A535,
0x9E6495A3, 0x0EDB8832, 0x79DCB8A4, 0xE0D5E91E,
0x97D2D988, 0x09B64C2B, 0x7EB17CBD, 0xE7B82D07,
0x90BF1D91, 0x1DB71064, 0x6AB020F2, 0xF3B97148,
0x84BE41DE, 0x1ADAD47D, 0x6DDDE4EB, 0xF4D4B551,
0x83D385C7, 0x136C9856, 0x646BA8C0, 0xFD62F97A,
0x8A65C9EC, 0x14015C4F, 0x63066CD9, 0xFA0F3D63,
0x8D080DF5, 0x3B6E20C8, 0x4C69105E, 0xD56041E4,
0xA2677172, 0x3C03E4D1, 0x4B04D447, 0xD20D85FD,
0xA50AB56B, 0x35B5A8FA, 0x42B2986C, 0xDBBBC9D6,
0xACBCF940, 0x32D86CE3, 0x45DF5C75, 0xDCD60DCF,
0xABD13D59, 0x26D930AC, 0x51DE003A, 0xC8D75180,
0xBFD06116, 0x21B4F4B5, 0x56B3C423, 0xCFBA9599,
0xB8BDA50F, 0x2802B89E, 0x5F058808, 0xC60CD9B2,
0xB10BE924, 0x2F6F7C87, 0x58684C11, 0xC1611DAB,
0xB6662D3D, 0x76DC4190, 0x01DB7106, 0x98D220BC,
0xEFD5102A, 0x71B18589, 0x06B6B51F, 0x9FBFE4A5,
0xE8B8D433, 0x7807C9A2, 0x0F00F934, 0x9609A88E,
0xE10E9818, 0x7F6A0DBB, 0x086D3D2D, 0x91646C97,
0xE6635C01, 0x6B6B51F4, 0x1C6C6162, 0x856530D8,
0xF262004E, 0x6C0695ED, 0x1B01A57B, 0x8208F4C1,
0xF50FC457, 0x65B0D9C6, 0x12B7E950, 0x8BBEB8EA,
0xFCB9887C, 0x62DD1DDF, 0x15DA2D49, 0x8CD37CF3,
0xFBD44C65, 0x4DB26158, 0x3AB551CE, 0xA3BC0074,
0xD4BB30E2, 0x4ADFA541, 0x3DD895D7, 0xA4D1C46D,
0xD3D6F4FB, 0x4369E96A, 0x346ED9FC, 0xAD678846,
0xDA60B8D0, 0x44042D73, 0x33031DE5, 0xAA0A4C5F,
0xDD0D7CC9, 0x5005713C, 0x270241AA, 0xBE0B1010,
0xC90C2086, 0x5768B525, 0x206F85B3, 0xB966D409,
0xCE61E49F, 0x5EDEF90E, 0x29D9C998, 0xB0D09822,
0xC7D7A8B4, 0x59B33D17, 0x2EB40D81, 0xB7BD5C3B,
0xC0BA6CAD, 0xEDB88320, 0x9ABFB3B6, 0x03B6E20C,
0x74B1D29A, 0xEAD54739, 0x9DD277AF, 0x04DB2615,
0x73DC1683, 0xE3630B12, 0x94643B84, 0x0D6D6A3E,
0x7A6A5AA8, 0xE40ECF0B, 0x9309FF9D, 0x0A00AE27,
0x7D079EB1, 0xF00F9344, 0x8708A3D2, 0x1E01F268,
0x6906C2FE, 0xF762575D, 0x806567CB, 0x196C3671,
0x6E6B06E7, 0xFED41B76, 0x89D32BE0, 0x10DA7A5A,
0x67DD4ACC, 0xF9B9DF6F, 0x8EBEEFF9, 0x17B7BE43,
0x60B08ED5, 0xD6D6A3E8, 0xA1D1937E, 0x38D8C2C4,
0x4FDFF252, 0xD1BB67F1, 0xA6BC5767, 0x3FB506DD,
0x48B2364B, 0xD80D2BDA, 0xAF0A1B4C, 0x36034AF6,
0x41047A60, 0xDF60EFC3, 0xA867DF55, 0x316E8EEF,
0x4669BE79, 0xCB61B38C, 0xBC66831A, 0x256FD2A0,
0x5268E236, 0xCC0C7795, 0xBB0B4703, 0x220216B9,
0x5505262F, 0xC5BA3BBE, 0xB2BD0B28, 0x2BB45A92,
0x5CB36A04, 0xC2D7FFA7, 0xB5D0CF31, 0x2CD99E8B,
0x5BDEAE1D, 0x9B64C2B0, 0xEC63F226, 0x756AA39C,
0x026D930A, 0x9C0906A9, 0xEB0E363F, 0x72076785,
0x05005713, 0x95BF4A82, 0xE2B87A14, 0x7BB12BAE,
0x0CB61B38, 0x92D28E9B, 0xE5D5BE0D, 0x7CDCEFB7,
0x0BDBDF21, 0x86D3D2D4, 0xF1D4E242, 0x68DDB3F8,
0x1FDA836E, 0x81BE16CD, 0xF6B9265B, 0x6FB077E1,
0x18B74777, 0x88085AE6, 0xFF0F6A70, 0x66063BCA,
0x11010B5C, 0x8F659EFF, 0xF862AE69, 0x616BFFD3,
0x166CCF45, 0xA00AE278, 0xD70DD2EE, 0x4E048354,
0x3903B3C2, 0xA7672661, 0xD06016F7, 0x4969474D,
0x3E6E77DB, 0xAED16A4A, 0xD9D65ADC, 0x40DF0B66,
0x37D83BF0, 0xA9BCAE53, 0xDEBB9EC5, 0x47B2CF7F,
0x30B5FFE9, 0xBDBDF21C, 0xCABAC28A, 0x53B39330,
0x24B4A3A6, 0xBAD03605, 0xCDD70693, 0x54DE5729,
0x23D967BF, 0xB3667A2E, 0xC4614AB8, 0x5D681B02,
0x2A6F2B94, 0xB40BBE37, 0xC30C8EA1, 0x5A05DF1B,
0x2D02EF8D, 0x544F0D0A, 0x50205355, 0x20312D48,
0x003A5746, 0x72636564, 0x69747079, 0x65206E6F,
0x726F7272, 0x0A0D2121, 0x00000000, 0x6564667A,
0x70797263, 0x65725F74, 0x616C7567, 0x79726F74,
0x6261745F, 0x7220656C, 0x203D7465, 0x00000000,
0x45485441, 0x38731652, 0x89ACFF91, 0xEE55D178,
0xEE000D0A, };

const u32_t zcFwImageSize=3508;