/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yellow.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 17:58:56 by bbrunell          #+#    #+#             */
/*   Updated: 2016/07/19 17:59:00 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef YELLOW_H
# define YELLOW_H

# define A 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E
# define B 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E
# define C 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E
# define D 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E
# define E 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E
# define F 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E
# define G 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFC01E, 0xFFBF1E
# define H 0xFFBF1E, 0xFFBF1E, 0xFFBF1E, 0xFFBF1E, 0xFFBF1E, 0xFFBF1E
# define I 0xFFBF1E, 0xFFBF1E, 0xFFBF1E, 0xFFBF1E, 0xFFBE1E, 0xFFBE1E
# define J 0xFFBE1E, 0xFFBE1E, 0xFFBE1E, 0xFFBE1E, 0xFFBE1E, 0xFFBE1E
# define K 0xFFBD1E, 0xFFBD1D, 0xFFBD1D, 0xFFBD1D, 0xFFBD1D, 0xFFBD1D
# define L 0xFFBC1D, 0xFFBC1D, 0xFFBC1D, 0xFFBC1D, 0xFFBC1D, 0xFFBC1D
# define M 0xFFBB1D, 0xFFBB1D, 0xFFBB1D, 0xFFBB1D, 0xFFBB1D, 0xFFBA1D
# define N 0xFFBA1D, 0xFFBA1D, 0xFFBA1D, 0xFFB91D, 0xFFB91D, 0xFFB91D
# define O 0xFFB91D, 0xFFB91D, 0xFFB81D, 0xFFB81D, 0xFFB81D, 0xFFB81D
# define P 0xFFB71D, 0xFFB71D, 0xFFB71C, 0xFFB61C, 0xFFB61C, 0xFFB61C
# define Q 0xFFB61C, 0xFFB51C, 0xFFB51C, 0xFFB51C, 0xFFB41C, 0xFFB41C
# define R 0xFFB41C, 0xFFB41C, 0xFFB31C, 0xFFB31C, 0xFFB31C, 0xFFB21C
# define S 0xFFB21C, 0xFFB21C, 0xFFB11C, 0xFFB11C, 0xFFB11C, 0xFFB01C
# define T 0xFFB01C, 0xFFB01B, 0xFFAF1B, 0xFFAF1B, 0xFFAE1B, 0xFFAE1B
# define U 0xFFAE1B, 0xFFAD1B, 0xFFAD1B, 0xFFAD1B, 0xFFAC1B, 0xFFAC1B
# define V 0xFFAB1B, 0xFFAB1B, 0xFFAB1B, 0xFFAA1B, 0xFFAA1B, 0xFFA91B
# define W 0xFFA91B, 0xFFA81B, 0xFFA81B, 0xFFA81B, 0xFFA71B, 0xFFA71B
# define X 0xFFA61B, 0xFFA61A, 0xFFA51A, 0xFFA51A, 0xFFA51A, 0xFFA41A
# define Y 0xFFA41A, 0xFFA31A, 0xFFA31A, 0xFFA21A, 0xFFA21A, 0xFFA11A
# define Z 0xFFA11A, 0xFFA01A, 0xFFA01A, 0xFF9F1A, 0xFF9F1A, 0xFF9F1A
# define AA A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z
# define AB AA, 0xFF9E1A, 0xFF9E1A, 0xFF9D1A, 0xFF9D1A, 0xFF9C1A
# define AC 0xFF9C1A, 0xFF9B1A, 0xFF9B1A, 0xFF9A1A, 0xFF9A1A, 0xFF9A19
# define AD 0xFF9919, 0xFF9919, 0xFF9819, 0xFF9819, 0xFF9719, 0xFF9719
# define AE 0xFF9619, 0xFF9619, 0xFF9619, 0xFF9519, 0xFE9519, 0xFE9419
# define AF 0xFE9419, 0xFD9319, 0xFD9319, 0xFD9219, 0xFC9219, 0xFC9219
# define AG 0xFC9119, 0xFB9119, 0xFB9019, 0xFB9019, 0xFB8F19, 0xFA8F19
# define AH 0xFA8F19, 0xFA8E19, 0xF98E19, 0xF98D19, 0xF98D19, 0xF88C19
# define AI 0xF88C19, 0xF88C19, 0xF78B19, 0xF78B19, 0xF78A19, 0xF68A19
# define AJ 0xF68919, 0xF68919, 0xF58919, 0xF58819, 0xF58819, 0xF48719
# define AK 0xF48719, 0xF48619, 0xF38618, 0xF38618, 0xF38518, 0xF28518
# define AL 0xF28418, 0xF28418, 0xF18318, 0xF18318, 0xF18318, 0xF08218
# define AM 0xF08218, 0xF08118, 0xEF8118, 0xEF8118, 0xEF8018, 0xEE8018
# define AN 0xEE7F18, 0xEE7F18, 0xED7F18, 0xED7E18, 0xED7E18, 0xEC7D18
# define AO 0xEC7D18, 0xEC7D18, 0xEB7C18, 0xEB7C18, 0xEB7B18, 0xEA7B18
# define AP 0xEA7A18, 0xEA7A18, 0xE97A18, 0xE97918, 0xE97918, 0xE87818
# define AQ 0xE87818, 0xE87818, 0xE87718, 0xE77718, 0xE77718, 0xE77618
# define AR 0xE67618, 0xE67518, 0xE67518, 0xE57518, 0xE57418, 0xE57418
# define AS 0xE47318, 0xE47318, 0xE47318, 0xE37218, 0xE37218, 0xE37118
# define AT 0xE27118, 0xE27118, 0xE27018, 0xE17018, 0xE16F18, 0xE16F18
# define AU 0xE06F18, 0xE06E18, 0xE06E18, 0xDF6E18, 0xDF6D18, 0xDF6D18
# define AV 0xDE6C18, 0xDE6C18, 0xDE6C18, 0xDD6B18, 0xDD6B18, 0xDD6B17
# define AW 0xDC6A17, 0xDC6A17, 0xDC6917, 0xDB6917, 0xDB6917, 0xDB6817
# define AX 0xDA6817, 0xDA6817, 0xDA6717, 0xD96717, 0xD96617, 0xD96617
# define AY 0xD86617, 0xD86517, 0xD86517, 0xD76517, 0xD76417, 0xD76417
# define AZ 0xD66317, 0xD66317, 0xD66317, 0xD56217, 0xD56217, 0xD56217
# define BA AB,AC,AD,AE,AF,AG,AH,AI,AJ,AK,AL,AM,AN,AO,AP,AQ,AR,AS,AT
# define BB BA,AU,AV,AW,AX,AY,AZ,0xD56117, 0xD46117, 0xD46117, 0xD46017
# define BC 0xD36017, 0xD35F17, 0xD35F17, 0xD25F17, 0xD25E17, 0xD25E17
# define BD 0xD15E17, 0xD15D17, 0xD15D17, 0xD05D17, 0xD05C17, 0xD05C17
# define BE 0xCF5C17, 0xCF5B17, 0xCF5B17, 0xCE5A17, 0xCE5A17, 0xCE5A17
# define BF 0xCD5917, 0xCD5917, 0xCD5917, 0xCC5817, 0xCC5817, 0xCC5817
# define BG 0xCB5717, 0xCB5717, 0xCB5717, 0xCA5617, 0xCA5617, 0xCA5617
# define BH 0xCA5517, 0xC95516, 0xC95516, 0xC95416, 0xC85416, 0xC85416
# define BI 0xC85316, 0xC75316, 0xC75316, 0xC75216, 0xC65216, 0xC65216
# define BJ 0xC65116, 0xC55116, 0xC55016, 0xC55016, 0xC45016, 0xC44F16
# define BK 0xC44F16, 0xC34F16, 0xC34E16, 0xC34E16, 0xC24E16, 0xC24D16
# define BL 0xC24D16, 0xC24D16, 0xC14C16, 0xC14C16, 0xC14C16, 0xC04B16
# define BM 0xC04B16, 0xC04B16, 0xBF4A16, 0xBF4A16, 0xBF4A16, 0xBE4916
# define BN 0xBE4916, 0xBE4916, 0xBD4916, 0xBD4816, 0xBD4816, 0xBC4816
# define BO 0xBC4716, 0xBC4716, 0xBC4715, 0xBB4615, 0xBB4615, 0xBB4615
# define BP 0xBA4515, 0xBA4515, 0xBA4515, 0xB94415, 0xB94415, 0xB94415
# define BQ 0xB84315, 0xB84315, 0xB84315, 0xB74215, 0xB74215, 0xB74215
# define BR 0xB74115, 0xB64115, 0xB64115, 0xB64015, 0xB54015, 0xB54015
# define BS 0xB54015, 0xB43F15, 0xB43F15, 0xB43F15, 0xB33E15, 0xB33E15
# define BT 0xB33E15, 0xB33D15, 0xB23D15, 0xB23D15, 0xB23C15, 0xB13C15
# define BU 0xB13C15, 0xB13B15, 0xB03B15, 0xB03B14, 0xB03A14, 0xAF3A14
# define BV 0xAF3A14, 0xAF3A14, 0xAF3914, 0xAE3914, 0xAE3914, 0xAE3814
# define BW 0xAD3814, 0xAD3814, 0xAD3714, 0xAC3714, 0xAC3714, 0xAC3614
# define BX 0xAC3614, 0xAB3614, 0xAB3614, 0xAB3514, 0xAA3514, 0xAA3514
# define BY 0xAA3414, 0xA93414, 0xA93414, 0xA93314, 0xA93314, 0xA83314
# define BZ 0xA83314, 0xA83214, 0xA73214, 0xA73214, 0xA73114, 0xA63114
# define CA BB,BC,BD,BE,BF,BG,BH,BI,BJ,BK,BL,BM,BN,BO,BP,BQ,BR,BS,BT
# define CB CA,BU,BV,BW,BX,BY,BZ,0xA63113, 0xA63013, 0xA63013, 0xA53013
# define CC 0xA52F13, 0xA52F13, 0xA42F13, 0xA42F13, 0xA42E13, 0xA32E13
# define CD 0xA32E13, 0xA32D13, 0xA32D13, 0xA22D13, 0xA22C13, 0xA22C13
# define CE 0xA12C13, 0xA12C13, 0xA12B13, 0xA12B13, 0xA02B13, 0xA02A13
# define CF 0xA02A13, 0x9F2A13, 0x9F2913, 0x9F2913, 0x9F2913, 0x9E2913
# define CG 0x9E2813, 0x9E2812, 0x9D2812, 0x9D2712, 0x9D2712, 0x9D2712
# define CH 0x9C2612, 0x9C2612, 0x9C2612, 0x9B2612, 0x9B2512, 0x9B2512
# define CI 0x9B2512, 0x9A2412, 0x9A2412, 0x9A2412, 0x992312, 0x992312
# define CJ 0x992312, 0x992312, 0x982212, 0x982212, 0x982212, 0x972112
# define CK 0x972112, 0x972112, 0x972012, 0x962012, 0x962011, 0x961F11
# define CL 0x951F11, 0x951F11, 0x951F11, 0x951E11, 0x941E11, 0x941E11
# define CM 0x941D11, 0x931D11, 0x931D11, 0x931C11, 0x931C11, 0x921C11
# define CN 0x921B11, 0x921B11, 0x921B11, 0x911A11, 0x911A11, 0x911A11
# define CO 0x901A11, 0x901911, 0x901911, 0x901911, 0x8F1811, 0x8F1811
# define CP 0x8F1810, 0x8F1710, 0x8E1710, 0x8E1710, 0x8E1610, 0x8D1610
# define CQ 0x8D1610, 0x8D1510, 0x8D1510, 0x8C1510, 0x8C1410, 0x8C1410
# define CR 0x8C1410, 0x8B1310, 0x8B1310, 0x8B1210, 0x8B1210, 0x8A1210
# define CS 0x8A1110, 0x8A1110, 0x891110, 0x891010, 0x891010, 0x891010
# define CT 0x880F10, 0x880F0F, 0x880E0F, 0x880E0F, 0x870E0F, 0x870D0F
# define CU 0x870D0F, 0x870C0F, 0x860C0F, 0x860C0F, 0x860B0F, 0x860B0F
# define CV 0x850A0F, 0x850A0F, 0x85090F, 0x85090F, 0x84090F, 0x84080F
# define CW 0x84080F, 0x83070F, 0x83070F, 0x83060F, 0x83060F, 0x82060F
# define CX 0x82050E, 0x82050E, 0x82040E, 0x81040E, 0x81040E, 0x81030E
# define CY 0x81030E, 0x80030E, 0x80020E, 0x80020E, 0x80010E, 0x7F010E
# define CZ 0x7F010E, 0x7F000E, 0x7F000E, 0x7E000E, 0x7E000E, 0x7E000E
# define DA CB,CC,CD,CE,CF,CG,CH,CI,CJ,CK,CL,CM,CN,CO,CP,CQ,CR,CS,CT
# define DB DA,CU,CV,CW,CX,CY,CZ,0x7E000E, 0x7D000D, 0x7D000D, 0x7D000D
# define DC 0x7D000D, 0x7C000D, 0x7C000D, 0x7C000D, 0x7C000D, 0x7C000D
# define DD 0x7B000D, 0x7B000D, 0x7B000D, 0x7B000D, 0x7A000D, 0x7A000D
# define DE 0x7A000D, 0x7A000C, 0x79000C, 0x79000C, 0x79000C, 0x79000C
# define DF 0x78000C, 0x78000C, 0x78000C, 0x78000C, 0x77000C, 0x77000C
# define DG 0x77000C, 0x77000C, 0x76000C, 0x76000B, 0x76000B, 0x76000B
# define DH 0x76000B, 0x75000B, 0x75000B, 0x75000B, 0x75000B, 0x74000B
# define DI 0x74000B, 0x74000B, 0x74000B, 0x73000A, 0x73000A, 0x73000A
# define DJ 0x73000A, 0x73000A, 0x72000A, 0x72000A, 0x72000A, 0x72000A
# define DK 0x71000A, 0x71000A, 0x71000A, 0x710009, 0x710009, 0x700009
# define DL 0x700009, 0x700009, 0x700009, 0x6F0009, 0x6F0009, 0x6F0009
# define DM 0x6F0009, 0x6F0009, 0x6E0008, 0x6E0008, 0x6E0008, 0x6E0008
# define DN 0x6D0008, 0x6D0008, 0x6D0008, 0x6D0008, 0x6D0008, 0x6C0008
# define DO 0x6C0007, 0x6C0007, 0x6C0007, 0x6C0007, 0x6B0007, 0x6B0007
# define DP 0x6B0007, 0x6B0007, 0x6A0007, 0x6A0007, 0x6A0007, 0x6A0006
# define DQ 0x6A0006, 0x690006, 0x690006, 0x690006, 0x690006, 0x690006
# define DR 0x680006, 0x680006, 0x680006, 0x680005, 0x680005, 0x670005
# define DS 0x670005, 0x670005, 0x670005, 0x660005, 0x660005, 0x660005
# define DT 0x660005, 0x660004, 0x650004, 0x650004, 0x650004, 0x650004
# define DU 0x650004, 0x640004, 0x640004, 0x640004, 0x640004, 0x640003
# define DV 0x630003, 0x630003, 0x630003, 0x630003, 0x630003, 0x630003
# define DW 0x620003, 0x620003, 0x620003, 0x620002, 0x620002, 0x610002
# define DX 0x610002, 0x610002, 0x610002, 0x610002, 0x600002, 0x600002
# define DY 0x600002, 0x600001, 0x600001, 0x5F0001, 0x5F0001, 0x5F0001
# define DZ 0x5F0001, 0x5F0001, 0x5F0001, 0x5E0001, 0x5E0000, 0x5E0000
# define EA DB,DC,DD,DE,DF,DG,DH,DI,DJ,DK,DL,DM,DN,DO,DP,DQ,DR,DS,DT
# define EB EA,DU,DV,DW,DX,DY,DZ,0x5E0000, 0x5E0000, 0x5D0000, 0x5D0000
# define EC 0x5D0000, 0x5D0000, 0x5D0000, 0x5C0000, 0x5C0000, 0x5C0000
# define ED 0x5C0000, 0x5C0000, 0x5C0000, 0x5B0000, 0x5B0000, 0x5B0000
# define EE 0x5B0000, 0x5B0000, 0x5B0000, 0x5A0000, 0x5A0000, 0x5A0000
# define EF 0x5A0000, 0x5A0000, 0x590000, 0x590000, 0x590000, 0x590000
# define EG 0x590000, 0x590000, 0x580000, 0x580000, 0x580000, 0x580000
# define EH 0x580000, 0x580000, 0x570000, 0x570000, 0x570000, 0x570000
# define EI 0x570000, 0x570000, 0x560000, 0x560000, 0x560000, 0x560000
# define EJ 0x560000, 0x560000, 0x550000, 0x550000, 0x550000, 0x550000
# define EK 0x550000, 0x550000, 0x540000, 0x540000, 0x540000, 0x540000
# define EL 0x540000, 0x540000, 0x540000, 0x530000, 0x530000, 0x530000
# define EM 0x530000, 0x530000, 0x530000, 0x520000, 0x520000, 0x520000
# define EN 0x520000, 0x520000, 0x520000, 0x520000, 0x510000, 0x510000
# define EO 0x510000, 0x510000, 0x510000, 0x510000, 0x500000, 0x500000
# define EP 0x500000, 0x500000, 0x500000, 0x500000, 0x500000, 0x4F0000
# define EQ 0x4F0000, 0x4F0000, 0x4F0000, 0x4F0000, 0x4F0000, 0x4F0000
# define ER 0x4E0000, 0x4E0000, 0x4E0000, 0x4E0000, 0x4E0000, 0x4E0000
# define ES 0x4E0000, 0x4D0000, 0x4D0000, 0x4D0000, 0x4D0000, 0x4D0000
# define ET 0x4D0000, 0x4D0000, 0x4C0000, 0x4C0000, 0x4C0000, 0x4C0000
# define EU 0x4C0000, 0x4C0000, 0x4C0000, 0x4C0000, 0x4B0000, 0x4B0000
# define EV 0x4B0000, 0x4B0000, 0x4B0000, 0x4B0000, 0x4B0000, 0x4A0000
# define EW 0x4A0000, 0x4A0000, 0x4A0000, 0x4A0000, 0x4A0000, 0x4A0000
# define EX 0x4A0000, 0x490000, 0x490000, 0x490000, 0x490000, 0x490000
# define EY 0x490000, 0x490000, 0x490000, 0x490000, 0x480000, 0x480000
# define EZ 0x480000, 0x480000, 0x480000, 0x480000, 0x480000, 0x480000
# define FA EB,EC,ED,EE,EF,EG,EH,EI,EJ,EK,EL,EM,EN,EO,EP,EQ,ER,ES,ET
# define FB FA,EU,EV,EW,EX,EY,EZ,0x470000, 0x470000, 0x470000, 0x470000
# define FC 0x470000, 0x470000, 0x470000, 0x470000, 0x470000, 0x460000
# define FD 0x460000, 0x460000, 0x460000, 0x460000, 0x460000, 0x460000
# define FE 0x460000, 0x460000, 0x450000, 0x450000, 0x450000, 0x450000
# define FF 0x450000, 0x450000, 0x450000, 0x450000, 0x450000, 0x450000
# define FG 0x440000, 0x440000, 0x440000, 0x440000, 0x440000, 0x440000
# define FH 0x440000, 0x440000, 0x440000, 0x440000, 0x430000, 0x430000
# define FI 0x430000, 0x430000, 0x430000, 0x430000, 0x430000, 0x430000
# define FJ 0x430000, 0x430000, 0x430000, 0x420000, 0x420000, 0x420000
# define FK 0x420000, 0x420000, 0x420000, 0x420000, 0x420000, 0x420000
# define FL 0x420000, 0x420000, 0x420000, 0x410000, 0x410000, 0x410000
# define FM 0x410000, 0x410000, 0x410000, 0x410000, 0x410000, 0x410000
# define FN 0x410000, 0x410000, 0x410000, 0x400000, 0x400000, 0x400000
# define FO 0x400000, 0x400000, 0x400000, 0x400000, 0x400000, 0x400000
# define FP 0x400000, 0x400000, 0x400000, 0x400000, 0x400000, 0x3F0000
# define FQ 0x3F0000, 0x3F0000, 0x3F0000, 0x3F0000, 0x3F0000, 0x3F0000
# define FR 0x3F0000, 0x3F0000, 0x3F0000, 0x3F0000, 0x3F0000, 0x3F0000
# define FS 0x3F0000, 0x3F0000, 0x3E0000
# define YELLOW FB,FC,FD,FE,FF,FG,FH,FI,FJ,FK,FL,FM,FN,FO,FP,FQ,FR,FS

#endif