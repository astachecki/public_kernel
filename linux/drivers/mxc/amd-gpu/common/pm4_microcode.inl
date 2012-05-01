/* Copyright (c) 2008-2010, QUALCOMM Incorporated. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of QUALCOMM Incorporated nor
 *       the names of its contributors may be used to endorse or promote
 *       products derived from this software without specific prior written
 *       permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef PM4_MICROCODE_H
#define PM4_MICROCODE_H

#define PM4_MICROCODE_VERSION 322696

#define PM4_MICROCODE_SIZE 768


#ifdef _PRIMLIB_INCLUDE
extern uint32 aPM4_Microcode[PM4_MICROCODE_SIZE][3];
#else
uint32 aPM4_Microcode[PM4_MICROCODE_SIZE][3]={
    { 0x00000000, 0xc0200400, 0x000 },
    { 0x00000000, 0x00a0000a, 0x000 },
    { 0x000001f3, 0x00204411, 0x000 },
    { 0x01000000, 0x00204811, 0x000 },
    { 0x00000000, 0x00400000, 0x004 },
    { 0x0000ffff, 0x00284621, 0x000 },
    { 0x00000000, 0xd9004800, 0x000 },
    { 0x00000000, 0x00400000, 0x000 },
    { 0x00000000, 0x34e00000, 0x000 },
    { 0x00000000, 0x00600000, 0x28c },
    { 0x0000ffff, 0xc0280a20, 0x000 },
    { 0x00000000, 0x00294582, 0x000 },
    { 0x00000000, 0xd9004800, 0x000 },
    { 0x00000000, 0x00400000, 0x000 },
    { 0x00000000, 0x00600000, 0x28c },
    { 0x0000ffff, 0xc0284620, 0x000 },
    { 0x00000000, 0xd9004800, 0x000 },
    { 0x00000000, 0x00400000, 0x000 },
    { 0x00000000, 0x00600000, 0x2b0 },
    { 0x00000000, 0xc0200c00, 0x000 },
    { 0x000021fc, 0x0029462c, 0x000 },
    { 0x00000000, 0x00404803, 0x021 },
    { 0x00000000, 0x00600000, 0x2b0 },
    { 0x00000000, 0xc0200000, 0x000 },
    { 0x00000000, 0xc0200c00, 0x000 },
    { 0x000021fc, 0x0029462c, 0x000 },
    { 0x00000000, 0x00204803, 0x000 },
    { 0x00003fff, 0x002f022f, 0x000 },
    { 0x00000000, 0x0ce00000, 0x000 },
    { 0x0000a1fd, 0x0029462c, 0x000 },
    { 0x00000000, 0xd9004800, 0x000 },
    { 0x00000000, 0x00400000, 0x021 },
    { 0x00000000, 0x00400000, 0x000 },
    { 0x00001000, 0x00281223, 0x000 },
    { 0x00001000, 0x002f0224, 0x000 },
    { 0x00000000, 0x0ce00000, 0x000 },
    { 0x000021f9, 0x0029462c, 0x000 },
    { 0x0000000e, 0x00404811, 0x000 },
    { 0x00000394, 0x00204411, 0x000 },
    { 0x00000001, 0xc0404811, 0x000 },
    { 0x00000000, 0x00600000, 0x2b0 },
    { 0x000021f9, 0x0029462c, 0x000 },
    { 0x00000008, 0xc0210a20, 0x000 },
    { 0x00000000, 0x14e00000, 0x02d },
    { 0x00000007, 0x00404811, 0x000 },
    { 0x00000008, 0x00404811, 0x000 },
    { 0x0000001f, 0x40280a20, 0x000 },
    { 0x0000001b, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ce00000, 0x043 },
    { 0x00000002, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ce00000, 0x04a },
    { 0x00000003, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ce00000, 0x051 },
    { 0x00000004, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ce00000, 0x058 },
    { 0x00000014, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ce00000, 0x058 },
    { 0x00000015, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ce00000, 0x060 },
    { 0x000021f9, 0x0029462c, 0x000 },
    { 0x00000000, 0xc0404802, 0x000 },
    { 0x0000001f, 0x40280a20, 0x000 },
    { 0x0000001b, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ce00000, 0x043 },
    { 0x00000002, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ce00000, 0x04a },
    { 0x00000000, 0x00400000, 0x051 },
    { 0x0000001f, 0xc0210e20, 0x000 },
    { 0x00000612, 0x00204411, 0x000 },
    { 0x00000000, 0x00204803, 0x000 },
    { 0x00000000, 0xc0204800, 0x000 },
    { 0x00000000, 0xc0204800, 0x000 },
    { 0x000021f9, 0x0029462c, 0x000 },
    { 0x00000000, 0x00404802, 0x000 },
    { 0x0000001e, 0xc0210e20, 0x000 },
    { 0x00000600, 0x00204411, 0x000 },
    { 0x00000000, 0x00204803, 0x000 },
    { 0x00000000, 0xc0204800, 0x000 },
    { 0x00000000, 0xc0204800, 0x000 },
    { 0x000021f9, 0x0029462c, 0x000 },
    { 0x00000000, 0x00404802, 0x000 },
    { 0x0000001e, 0xc0210e20, 0x000 },
    { 0x00000605, 0x00204411, 0x000 },
    { 0x00000000, 0x00204803, 0x000 },
    { 0x00000000, 0xc0204800, 0x000 },
    { 0x00000000, 0xc0204800, 0x000 },
    { 0x000021f9, 0x0029462c, 0x000 },
    { 0x00000000, 0x00404802, 0x000 },
    { 0x0000001f, 0x40280a20, 0x000 },
    { 0x0000001f, 0xc0210e20, 0x000 },
    { 0x0000060a, 0x00204411, 0x000 },
    { 0x00000000, 0x00204803, 0x000 },
    { 0x00000000, 0xc0204800, 0x000 },
    { 0x00000000, 0xc0204800, 0x000 },
    { 0x000021f9, 0x0029462c, 0x000 },
    { 0x00000000, 0x00404802, 0x000 },
    { 0x0000001f, 0xc0680a20, 0x2b0 },
    { 0x000021f9, 0x0029462c, 0x000 },
    { 0x00000000, 0x00404802, 0x000 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000001, 0x00204811, 0x000 },
    { 0x00001fff, 0x40280a20, 0x000 },
    { 0x80000000, 0x40280e20, 0x000 },
    { 0x40000000, 0xc0281220, 0x000 },
    { 0x00040000, 0x00694622, 0x2ba },
    { 0x00000000, 0x00201410, 0x000 },
    { 0x00000000, 0x002f0223, 0x000 },
    { 0x00000000, 0x0ae00000, 0x06d },
    { 0x00000000, 0xc0401800, 0x070 },
    { 0x00001fff, 0xc0281a20, 0x000 },
    { 0x00040000, 0x00694626, 0x2ba },
    { 0x00000000, 0x00201810, 0x000 },
    { 0x00000000, 0x002f0224, 0x000 },
    { 0x00000000, 0x0ae00000, 0x073 },
    { 0x00000000, 0xc0401c00, 0x076 },
    { 0x00001fff, 0xc0281e20, 0x000 },
    { 0x00040000, 0x00694627, 0x2ba },
    { 0x00000000, 0x00201c10, 0x000 },
    { 0x00000000, 0x00204402, 0x000 },
    { 0x00000000, 0x002820c5, 0x000 },
    { 0x00000000, 0x004948e8, 0x000 },
    { 0x00000000, 0x00600000, 0x28c },
    { 0x00000010, 0x40210a20, 0x000 },
    { 0x000000ff, 0x00280a22, 0x000 },
    { 0x000007ff, 0x40280e20, 0x000 },
    { 0x00000002, 0x00221e23, 0x000 },
    { 0x00000005, 0xc0211220, 0x000 },
    { 0x00080000, 0x00281224, 0x000 },
    { 0x00000013, 0x00210224, 0x000 },
    { 0x00000000, 0x14c00000, 0x084 },
    { 0xa100ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204811, 0x000 },
    { 0x00000000, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x088 },
    { 0x00000000, 0x0020162d, 0x000 },
    { 0x00004000, 0x00500e23, 0x097 },
    { 0x00000001, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x08c },
    { 0x00000001, 0x0020162d, 0x000 },
    { 0x00004800, 0x00500e23, 0x097 },
    { 0x00000002, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x090 },
    { 0x00000003, 0x0020162d, 0x000 },
    { 0x00004900, 0x00500e23, 0x097 },
    { 0x00000003, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x094 },
    { 0x00000002, 0x0020162d, 0x000 },
    { 0x00004908, 0x00500e23, 0x097 },
    { 0x00000012, 0x0020162d, 0x000 },
    { 0x00002000, 0x00300e23, 0x000 },
    { 0x00000000, 0x00290d83, 0x000 },
    { 0x9400ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x002948e5, 0x000 },
    { 0x00000000, 0x00294483, 0x000 },
    { 0x00000000, 0x40201800, 0x000 },
    { 0x00000000, 0xd9004800, 0x000 },
    { 0x00000013, 0x00210224, 0x000 },
    { 0x00000000, 0x14c00000, 0x000 },
    { 0x9400ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x002948e5, 0x000 },
    { 0x9300ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00404806, 0x000 },
    { 0x00000000, 0x00600000, 0x28c },
    { 0x00000000, 0xc0200800, 0x000 },
    { 0x00000000, 0xc0201400, 0x000 },
    { 0x0000001f, 0x00211a25, 0x000 },
    { 0x00000000, 0x14e00000, 0x000 },
    { 0x000007ff, 0x00280e25, 0x000 },
    { 0x00000010, 0x00211225, 0x000 },
    { 0x8300ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x002f0224, 0x000 },
    { 0x00000000, 0x0ae00000, 0x0ae },
    { 0x00000000, 0x00203622, 0x000 },
    { 0x00004000, 0x00504a23, 0x0bd },
    { 0x00000001, 0x002f0224, 0x000 },
    { 0x00000000, 0x0ae00000, 0x0b2 },
    { 0x00000001, 0x00203622, 0x000 },
    { 0x00004800, 0x00504a23, 0x0bd },
    { 0x00000002, 0x002f0224, 0x000 },
    { 0x00000000, 0x0ae00000, 0x0b6 },
    { 0x00000003, 0x00203622, 0x000 },
    { 0x00004900, 0x00504a23, 0x0bd },
    { 0x00000003, 0x002f0224, 0x000 },
    { 0x00000000, 0x0ae00000, 0x0ba },
    { 0x00000002, 0x00203622, 0x000 },
    { 0x00004908, 0x00504a23, 0x0bd },
    { 0x00000012, 0x00203622, 0x000 },
    { 0x00000000, 0x00290d83, 0x000 },
    { 0x00002000, 0x00304a23, 0x000 },
    { 0x8400ffff, 0x00204411, 0x000 },
    { 0x00000000, 0xc0204800, 0x000 },
    { 0x00000000, 0x21000000, 0x000 },
    { 0x00000000, 0x00400000, 0x0a4 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000001, 0x00204811, 0x000 },
    { 0x00040578, 0x00604411, 0x2ba },
    { 0x00000000, 0xc0400000, 0x000 },
    { 0x00000000, 0xc0200c00, 0x000 },
    { 0x00000000, 0xc0201000, 0x000 },
    { 0x00000000, 0xc0201400, 0x000 },
    { 0x00000000, 0xc0201800, 0x000 },
    { 0x00007f00, 0x00280a21, 0x000 },
    { 0x00004500, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ce00000, 0x0cd },
    { 0x00000000, 0xc0201c00, 0x000 },
    { 0x00000000, 0x17000000, 0x000 },
    { 0x00000010, 0x00280a23, 0x000 },
    { 0x00000010, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ce00000, 0x0d5 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000001, 0x00204811, 0x000 },
    { 0x00040000, 0x00694624, 0x2ba },
    { 0x00000000, 0x00400000, 0x0d6 },
    { 0x00000000, 0x00600000, 0x135 },
    { 0x00000000, 0x002820d0, 0x000 },
    { 0x00000007, 0x00280a23, 0x000 },
    { 0x00000001, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x0dd },
    { 0x00000000, 0x002f00a8, 0x000 },
    { 0x00000000, 0x04e00000, 0x0f6 },
    { 0x00000000, 0x00400000, 0x0fd },
    { 0x00000002, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x0e2 },
    { 0x00000000, 0x002f00a8, 0x000 },
    { 0x00000000, 0x02e00000, 0x0f6 },
    { 0x00000000, 0x00400000, 0x0fd },
    { 0x00000003, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x0e7 },
    { 0x00000000, 0x002f00a8, 0x000 },
    { 0x00000000, 0x0ce00000, 0x0f6 },
    { 0x00000000, 0x00400000, 0x0fd },
    { 0x00000004, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x0ec },
    { 0x00000000, 0x002f00a8, 0x000 },
    { 0x00000000, 0x0ae00000, 0x0f6 },
    { 0x00000000, 0x00400000, 0x0fd },
    { 0x00000005, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x0f1 },
    { 0x00000000, 0x002f00a8, 0x000 },
    { 0x00000000, 0x06e00000, 0x0f6 },
    { 0x00000000, 0x00400000, 0x0fd },
    { 0x00000006, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x0f6 },
    { 0x00000000, 0x002f00a8, 0x000 },
    { 0x00000000, 0x08e00000, 0x0f6 },
    { 0x00000000, 0x00400000, 0x0fd },
    { 0x00007f00, 0x00280a21, 0x000 },
    { 0x00004500, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x000 },
    { 0x00000008, 0x00210a23, 0x000 },
    { 0x00000000, 0x14e00000, 0x11b },
    { 0x00000000, 0xc0204400, 0x000 },
    { 0x00000000, 0xc0404800, 0x000 },
    { 0x00007f00, 0x00280a21, 0x000 },
    { 0x00004500, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x102 },
    { 0x00000000, 0xc0200000, 0x000 },
    { 0x00000000, 0xc0400000, 0x000 },
    { 0x00000000, 0x00404c07, 0x0cd },
    { 0x00000000, 0xc0201000, 0x000 },
    { 0x00000000, 0xc0201400, 0x000 },
    { 0x00000000, 0xc0201800, 0x000 },
    { 0x00000000, 0xc0201c00, 0x000 },
    { 0x00000000, 0x17000000, 0x000 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000001, 0x00204811, 0x000 },
    { 0x00040000, 0x00694624, 0x2ba },
    { 0x00000000, 0x002820d0, 0x000 },
    { 0x00000000, 0x002f00a8, 0x000 },
    { 0x00000000, 0x0ce00000, 0x000 },
    { 0x00000000, 0x00404c07, 0x107 },
    { 0x00000000, 0xc0201000, 0x000 },
    { 0x00000000, 0xc0201400, 0x000 },
    { 0x00000000, 0xc0201800, 0x000 },
    { 0x00000000, 0xc0201c00, 0x000 },
    { 0x00000000, 0x17000000, 0x000 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000001, 0x00204811, 0x000 },
    { 0x00040000, 0x00694624, 0x2ba },
    { 0x00000000, 0x002820d0, 0x000 },
    { 0x00000000, 0x002f00a8, 0x000 },
    { 0x00000000, 0x06e00000, 0x000 },
    { 0x00000000, 0x00404c07, 0x113 },
    { 0x0000060d, 0x00204411, 0x000 },
    { 0x00000000, 0xc0204800, 0x000 },
    { 0x0000860e, 0x00204411, 0x000 },
    { 0x00000000, 0xd9004800, 0x000 },
    { 0x00000000, 0x00400000, 0x000 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000009, 0x00204811, 0x000 },
    { 0x0000060d, 0x00204411, 0x000 },
    { 0x00000000, 0xc0204800, 0x000 },
    { 0x00000000, 0x00404810, 0x000 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000001, 0x00204811, 0x000 },
    { 0x00000000, 0xc0200800, 0x000 },
    { 0x00007fff, 0x00281a22, 0x000 },
    { 0x00040000, 0x00694626, 0x2ba },
    { 0x00000000, 0x00200c10, 0x000 },
    { 0x00000000, 0xc0201000, 0x000 },
    { 0x80000000, 0x00281a22, 0x000 },
    { 0x00000000, 0x002f0226, 0x000 },
    { 0x00000000, 0x0ce00000, 0x132 },
    { 0x00000000, 0x00600000, 0x135 },
    { 0x00000000, 0x00201c10, 0x000 },
    { 0x00000000, 0x00300c67, 0x000 },
    { 0x0000060d, 0x00204411, 0x000 },
    { 0x00000000, 0x00204804, 0x000 },
    { 0x00000000, 0x00404803, 0x000 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204811, 0x000 },
    { 0xa400ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204811, 0x000 },
    { 0x000001ea, 0x00204411, 0x000 },
    { 0x00000000, 0x00204804, 0x000 },
    { 0x00000000, 0x1ac00000, 0x13b },
    { 0x9e00ffff, 0x00204411, 0x000 },
    { 0xdeadbeef, 0x00204811, 0x000 },
    { 0x00000000, 0x1ae00000, 0x13e },
    { 0xa400ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x0080480b, 0x000 },
    { 0x000001f3, 0x00204411, 0x000 },
    { 0xe0000000, 0xc0484a20, 0x000 },
    { 0x00000000, 0xd9000000, 0x000 },
    { 0x00000000, 0x00400000, 0x000 },
    { 0x00000000, 0xc0200c00, 0x000 },
    { 0x8c00ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204803, 0x000 },
    { 0x00000fff, 0x00281223, 0x000 },
    { 0x0000000f, 0x00203624, 0x000 },
    { 0x00000003, 0x00381224, 0x000 },
    { 0x00005000, 0x00301224, 0x000 },
    { 0x0000000e, 0x00203624, 0x000 },
    { 0x8700ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204804, 0x000 },
    { 0x00000001, 0x00331224, 0x000 },
    { 0x8600ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204804, 0x000 },
    { 0x0000001d, 0x00211223, 0x000 },
    { 0x00000020, 0x00222091, 0x000 },
    { 0x00000003, 0x00381228, 0x000 },
    { 0x8800ffff, 0x00204411, 0x000 },
    { 0x00004fff, 0x00304a24, 0x000 },
    { 0x00000010, 0x00211623, 0x000 },
    { 0x00000fff, 0x00281625, 0x000 },
    { 0x00000fff, 0x00281a23, 0x000 },
    { 0x00000000, 0x00331ca6, 0x000 },
    { 0x8f00ffff, 0x00204411, 0x000 },
    { 0x00000003, 0x00384a27, 0x000 },
    { 0x00000010, 0x00211223, 0x000 },
    { 0x00000fff, 0x00281224, 0x000 },
    { 0x0000000d, 0x00203624, 0x000 },
    { 0x8b00ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204804, 0x000 },
    { 0x00000003, 0x00381224, 0x000 },
    { 0x00005000, 0x00301224, 0x000 },
    { 0x0000000c, 0x00203624, 0x000 },
    { 0x8500ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204804, 0x000 },
    { 0x00000000, 0x00331cc8, 0x000 },
    { 0x9000ffff, 0x00204411, 0x000 },
    { 0x00000003, 0x00384a27, 0x000 },
    { 0x00300000, 0x00493a2e, 0x000 },
    { 0x00000000, 0x00202c11, 0x000 },
    { 0x00000001, 0x00303e2f, 0x000 },
    { 0x00000000, 0xc0200800, 0x000 },
    { 0x00000000, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ce00000, 0x172 },
    { 0x00000000, 0xd9000000, 0x000 },
    { 0x00000000, 0x00400000, 0x000 },
    { 0x00000000, 0x00600000, 0x28c },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000002, 0x00204811, 0x000 },
    { 0x00000000, 0x002f0230, 0x000 },
    { 0x00000000, 0x0ae00000, 0x175 },
    { 0x00000000, 0xc0200800, 0x000 },
    { 0x00000009, 0x00210222, 0x000 },
    { 0x00000000, 0x14c00000, 0x17d },
    { 0x00000000, 0x00600000, 0x2b7 },
    { 0x00000000, 0x00200c11, 0x000 },
    { 0x00000016, 0x00203623, 0x000 },
    { 0x00000000, 0x00210222, 0x000 },
    { 0x00000000, 0x14c00000, 0x180 },
    { 0x00000000, 0xc0200000, 0x000 },
    { 0x00000001, 0x00210222, 0x000 },
    { 0x00000000, 0x14c00000, 0x183 },
    { 0x00000000, 0xc0200000, 0x000 },
    { 0x00000002, 0x00210222, 0x000 },
    { 0x00000000, 0x14c00000, 0x18d },
    { 0x00000004, 0xc0203620, 0x000 },
    { 0x00000005, 0xc0203620, 0x000 },
    { 0x00000006, 0xc0203620, 0x000 },
    { 0x00000007, 0xc0203620, 0x000 },
    { 0x00000008, 0xc0203620, 0x000 },
    { 0x00000009, 0xc0203620, 0x000 },
    { 0x0000000a, 0xc0203620, 0x000 },
    { 0x0000000b, 0xc0203620, 0x000 },
    { 0x00000003, 0x00210222, 0x000 },
    { 0x00000000, 0x14c00000, 0x1b5 },
    { 0x00000000, 0xc0200c00, 0x000 },
    { 0x8c00ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204803, 0x000 },
    { 0x00000fff, 0x00281223, 0x000 },
    { 0x0000000f, 0x00203624, 0x000 },
    { 0x00000003, 0x00381224, 0x000 },
    { 0x00005000, 0x00301224, 0x000 },
    { 0x0000000e, 0x00203624, 0x000 },
    { 0x8700ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204804, 0x000 },
    { 0x00000001, 0x00331224, 0x000 },
    { 0x8600ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204804, 0x000 },
    { 0x0000001d, 0x00211223, 0x000 },
    { 0x00000020, 0x00222091, 0x000 },
    { 0x00000003, 0x00381228, 0x000 },
    { 0x8800ffff, 0x00204411, 0x000 },
    { 0x00004fff, 0x00304a24, 0x000 },
    { 0x00000010, 0x00211623, 0x000 },
    { 0x00000fff, 0x00281625, 0x000 },
    { 0x00000fff, 0x00281a23, 0x000 },
    { 0x00000000, 0x00331ca6, 0x000 },
    { 0x8f00ffff, 0x00204411, 0x000 },
    { 0x00000003, 0x00384a27, 0x000 },
    { 0x00000010, 0x00211223, 0x000 },
    { 0x00000fff, 0x00281224, 0x000 },
    { 0x0000000d, 0x00203624, 0x000 },
    { 0x8b00ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204804, 0x000 },
    { 0x00000003, 0x00381224, 0x000 },
    { 0x00005000, 0x00301224, 0x000 },
    { 0x0000000c, 0x00203624, 0x000 },
    { 0x8500ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204804, 0x000 },
    { 0x00000000, 0x00331cc8, 0x000 },
    { 0x9000ffff, 0x00204411, 0x000 },
    { 0x00000003, 0x00384a27, 0x000 },
    { 0x00300000, 0x00293a2e, 0x000 },
    { 0x00000004, 0x00210222, 0x000 },
    { 0x00000000, 0x14c00000, 0x1bd },
    { 0xa300ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x40204800, 0x000 },
    { 0x0000000a, 0xc0220e20, 0x000 },
    { 0x00000011, 0x00203623, 0x000 },
    { 0x000021f4, 0x00204411, 0x000 },
    { 0x0000000a, 0x00614a2c, 0x2b7 },
    { 0x00000005, 0x00210222, 0x000 },
    { 0x00000000, 0x14c00000, 0x1c0 },
    { 0x00000000, 0xc0200000, 0x000 },
    { 0x00000006, 0x00210222, 0x000 },
    { 0x00000000, 0x14c00000, 0x1c6 },
    { 0x9c00ffff, 0x00204411, 0x000 },
    { 0x0000001f, 0x40214a20, 0x000 },
    { 0x9600ffff, 0x00204411, 0x000 },
    { 0x00000000, 0xc0204800, 0x000 },
    { 0x00000007, 0x00210222, 0x000 },
    { 0x00000000, 0x14c00000, 0x1d0 },
    { 0x3fffffff, 0x00283a2e, 0x000 },
    { 0xc0000000, 0x40280e20, 0x000 },
    { 0x00000000, 0x0029386e, 0x000 },
    { 0x18000000, 0x40280e20, 0x000 },
    { 0x00000016, 0x00203623, 0x000 },
    { 0xa400ffff, 0x00204411, 0x000 },
    { 0x00000000, 0xc0202c00, 0x000 },
    { 0x00000000, 0x0020480b, 0x000 },
    { 0x00000008, 0x00210222, 0x000 },
    { 0x00000000, 0x14c00000, 0x1dc },
    { 0x00000000, 0xc0200c00, 0x000 },
    { 0x00000013, 0x00203623, 0x000 },
    { 0x00000015, 0x00203623, 0x000 },
    { 0x00000002, 0x40221220, 0x000 },
    { 0x00000000, 0x00301083, 0x000 },
    { 0x00000014, 0x00203624, 0x000 },
    { 0x00000003, 0xc0210e20, 0x000 },
    { 0x10000000, 0x00280e23, 0x000 },
    { 0xefffffff, 0x00283a2e, 0x000 },
    { 0x00000000, 0x0029386e, 0x000 },
    { 0x00000000, 0x00400000, 0x000 },
    { 0x00000000, 0x00600000, 0x28c },
    { 0x00000000, 0xc0200800, 0x000 },
    { 0x0000001f, 0x00210e22, 0x000 },
    { 0x00000000, 0x14e00000, 0x000 },
    { 0x000003ff, 0x00280e22, 0x000 },
    { 0x00000018, 0x00211222, 0x000 },
    { 0x00000004, 0x00301224, 0x000 },
    { 0x00000000, 0x0020108d, 0x000 },
    { 0x00002000, 0x00291224, 0x000 },
    { 0x8300ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00294984, 0x000 },
    { 0x8400ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204803, 0x000 },
    { 0x00000000, 0x21000000, 0x000 },
    { 0x00000000, 0x00400000, 0x1de },
    { 0x8200ffff, 0x00204411, 0x000 },
    { 0x00000001, 0x00204811, 0x000 },
    { 0x00000000, 0xc0200800, 0x000 },
    { 0x00003fff, 0x40280e20, 0x000 },
    { 0x00000010, 0xc0211220, 0x000 },
    { 0x00000000, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x1fb },
    { 0x00000000, 0x2ae00000, 0x205 },
    { 0x20000080, 0x00281e2e, 0x000 },
    { 0x00000080, 0x002f0227, 0x000 },
    { 0x00000000, 0x0ce00000, 0x1f8 },
    { 0x00000000, 0x00401c0c, 0x1f9 },
    { 0x00000010, 0x00201e2d, 0x000 },
    { 0x000021f9, 0x00294627, 0x000 },
    { 0x00000000, 0x00404811, 0x205 },
    { 0x00000001, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x23a },
    { 0x00000000, 0x28e00000, 0x205 },
    { 0x00800080, 0x00281e2e, 0x000 },
    { 0x00000080, 0x002f0227, 0x000 },
    { 0x00000000, 0x0ce00000, 0x202 },
    { 0x00000000, 0x00401c0c, 0x203 },
    { 0x00000010, 0x00201e2d, 0x000 },
    { 0x000021f9, 0x00294627, 0x000 },
    { 0x00000001, 0x00204811, 0x000 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x20c },
    { 0x00000003, 0x00204811, 0x000 },
    { 0x0000000c, 0x0020162d, 0x000 },
    { 0x0000000d, 0x00201a2d, 0x000 },
    { 0xffdfffff, 0x00483a2e, 0x210 },
    { 0x00000004, 0x00204811, 0x000 },
    { 0x0000000e, 0x0020162d, 0x000 },
    { 0x0000000f, 0x00201a2d, 0x000 },
    { 0xffefffff, 0x00283a2e, 0x000 },
    { 0x00000000, 0x00201c10, 0x000 },
    { 0x00000000, 0x002f0067, 0x000 },
    { 0x00000000, 0x04e00000, 0x205 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000006, 0x00204811, 0x000 },
    { 0x8300ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204805, 0x000 },
    { 0x8900ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204806, 0x000 },
    { 0x8400ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204803, 0x000 },
    { 0x00000000, 0x21000000, 0x000 },
    { 0x00000000, 0x00601010, 0x28c },
    { 0x0000000c, 0x00221e24, 0x000 },
    { 0x00000000, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x22d },
    { 0x20000000, 0x00293a2e, 0x000 },
    { 0x000021f7, 0x0029462c, 0x000 },
    { 0x00000000, 0x002948c7, 0x000 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000005, 0x00204811, 0x000 },
    { 0x0000000c, 0x00203630, 0x000 },
    { 0x00000007, 0x00204811, 0x000 },
    { 0x0000000d, 0x00203630, 0x000 },
    { 0x9100ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204803, 0x000 },
    { 0x00000000, 0x23000000, 0x000 },
    { 0x8d00ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00404803, 0x240 },
    { 0x00800000, 0x00293a2e, 0x000 },
    { 0x000021f6, 0x0029462c, 0x000 },
    { 0x00000000, 0x002948c7, 0x000 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000005, 0x00204811, 0x000 },
    { 0x0000000e, 0x00203630, 0x000 },
    { 0x00000007, 0x00204811, 0x000 },
    { 0x0000000f, 0x00203630, 0x000 },
    { 0x9200ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204803, 0x000 },
    { 0x00000000, 0x25000000, 0x000 },
    { 0x8e00ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00404803, 0x240 },
    { 0x8300ffff, 0x00204411, 0x000 },
    { 0x00000003, 0x00381224, 0x000 },
    { 0x00005000, 0x00304a24, 0x000 },
    { 0x8400ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204803, 0x000 },
    { 0x00000000, 0x21000000, 0x000 },
    { 0x8200ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00404811, 0x000 },
    { 0x00000003, 0x40280a20, 0x000 },
    { 0xffffffe0, 0xc0280e20, 0x000 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000001, 0x00204811, 0x000 },
    { 0x00000001, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x24a },
    { 0x000021f6, 0x0029122c, 0x000 },
    { 0x00040000, 0x00494624, 0x24c },
    { 0x000021f7, 0x0029122c, 0x000 },
    { 0x00040000, 0x00294624, 0x000 },
    { 0x00000000, 0x00600000, 0x2ba },
    { 0x00000000, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ce00000, 0x252 },
    { 0x00000001, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ce00000, 0x252 },
    { 0x00000000, 0x00481630, 0x258 },
    { 0x00000fff, 0x00281630, 0x000 },
    { 0x0000000c, 0x00211a30, 0x000 },
    { 0x00000fff, 0x00281a26, 0x000 },
    { 0x00000000, 0x002f0226, 0x000 },
    { 0x00000000, 0x0ae00000, 0x258 },
    { 0x00000000, 0xc0400000, 0x000 },
    { 0x00040d02, 0x00604411, 0x2ba },
    { 0x00000000, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x25d },
    { 0x00000010, 0x00211e30, 0x000 },
    { 0x00000fff, 0x00482630, 0x267 },
    { 0x00000001, 0x002f0222, 0x000 },
    { 0x00000000, 0x0ae00000, 0x261 },
    { 0x00000fff, 0x00281e30, 0x000 },
    { 0x00000200, 0x00402411, 0x267 },
    { 0x00000000, 0x00281e30, 0x000 },
    { 0x00000010, 0x00212630, 0x000 },
    { 0x00000010, 0x00211a30, 0x000 },
    { 0x00000000, 0x002f0226, 0x000 },
    { 0x00000000, 0x0ae00000, 0x258 },
    { 0x00000000, 0xc0400000, 0x000 },
    { 0x00000003, 0x00381625, 0x000 },
    { 0x00000003, 0x00381a26, 0x000 },
    { 0x00000003, 0x00381e27, 0x000 },
    { 0x00000003, 0x00382629, 0x000 },
    { 0x00005000, 0x00302629, 0x000 },
    { 0x0000060d, 0x00204411, 0x000 },
    { 0x00000000, 0xc0204800, 0x000 },
    { 0x00000000, 0x00204806, 0x000 },
    { 0x00005000, 0x00302225, 0x000 },
    { 0x00040000, 0x00694628, 0x2ba },
    { 0x00000001, 0x00302228, 0x000 },
    { 0x00000000, 0x00202810, 0x000 },
    { 0x00040000, 0x00694628, 0x2ba },
    { 0x00000001, 0x00302228, 0x000 },
    { 0x00000000, 0x00200810, 0x000 },
    { 0x00040000, 0x00694628, 0x2ba },
    { 0x00000001, 0x00302228, 0x000 },
    { 0x00000000, 0x00201410, 0x000 },
    { 0x0000060d, 0x00204411, 0x000 },
    { 0x00000000, 0x00204803, 0x000 },
    { 0x0000860e, 0x00204411, 0x000 },
    { 0x00000000, 0x0020480a, 0x000 },
    { 0x00000000, 0x00204802, 0x000 },
    { 0x00000000, 0x00204805, 0x000 },
    { 0x00000000, 0x002f0128, 0x000 },
    { 0x00000000, 0x0ae00000, 0x282 },
    { 0x00005000, 0x00302227, 0x000 },
    { 0x0000000c, 0x00300e23, 0x000 },
    { 0x00000003, 0x00331a26, 0x000 },
    { 0x00000000, 0x002f0226, 0x000 },
    { 0x00000000, 0x0ae00000, 0x270 },
    { 0x00000000, 0x00400000, 0x000 },
    { 0x000001f3, 0x00204411, 0x000 },
    { 0x04000000, 0x00204811, 0x000 },
    { 0x00000000, 0x00400000, 0x289 },
    { 0x00000000, 0xc0600000, 0x28c },
    { 0x00000000, 0x00400000, 0x000 },
    { 0x00000000, 0x0ec00000, 0x28e },
    { 0x00000000, 0x00800000, 0x000 },
    { 0x000021f9, 0x0029462c, 0x000 },
    { 0x00000005, 0x00204811, 0x000 },
    { 0x00000000, 0x0020280c, 0x000 },
    { 0x00000011, 0x0020262d, 0x000 },
    { 0x00000000, 0x002f012c, 0x000 },
    { 0x00000000, 0x0ae00000, 0x295 },
    { 0x00000000, 0x00403011, 0x296 },
    { 0x00000400, 0x0030322c, 0x000 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000002, 0x00204811, 0x000 },
    { 0x0000000a, 0x0021262c, 0x000 },
    { 0x00000000, 0x00210130, 0x000 },
    { 0x00000000, 0x14c00000, 0x29d },
    { 0xa500ffff, 0x00204411, 0x000 },
    { 0x00000001, 0x00404811, 0x299 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000001, 0x00204811, 0x000 },
    { 0x00042294, 0x00604411, 0x2ba },
    { 0x00000000, 0x00200010, 0x000 },
    { 0xa500ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204811, 0x000 },
    { 0x000021f4, 0x0029462c, 0x000 },
    { 0x0000000a, 0x00214a2a, 0x000 },
    { 0xa200ffff, 0x00204411, 0x000 },
    { 0x00000001, 0x00204811, 0x000 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000002, 0x00204811, 0x000 },
    { 0x00000000, 0x00210130, 0x000 },
    { 0xdf7fffff, 0x00283a2e, 0x000 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000001, 0x00204811, 0x000 },
    { 0x00042294, 0x00604411, 0x2ba },
    { 0x00000000, 0x00200010, 0x000 },
    { 0x00000010, 0x0080362a, 0x000 },
    { 0x9700ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x0020480c, 0x000 },
    { 0xa200ffff, 0x00204411, 0x000 },
    { 0x00000000, 0x00204811, 0x000 },
    { 0x8100ffff, 0x00204411, 0x000 },
    { 0x00000002, 0x00204811, 0x000 },
    { 0x00000000, 0x00810130, 0x000 },
    { 0x00000000, 0x00203011, 0x000 },
    { 0x00000010, 0x0080362c, 0x000 },
    { 0x00000000, 0xc0400000, 0x000 },
    { 0x00000000, 0x1ac00000, 0x2ba },
    { 0x9f00ffff, 0x00204411, 0x000 },
    { 0xdeadbeef, 0x00204811, 0x000 },
    { 0x00000000, 0x1ae00000, 0x2bd },
    { 0x00000000, 0x00800000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00000000, 0x00000000, 0x000 },
    { 0x00020143, 0x00020002, 0x000 },
    { 0x00020002, 0x00020002, 0x000 },
    { 0x00020002, 0x00020002, 0x000 },
    { 0x00020002, 0x01dd0002, 0x000 },
    { 0x006301ee, 0x00280012, 0x000 },
    { 0x00020002, 0x00020026, 0x000 },
    { 0x00020002, 0x01ec0002, 0x000 },
    { 0x00790242, 0x00020002, 0x000 },
    { 0x00020002, 0x00020002, 0x000 },
    { 0x00200012, 0x00020016, 0x000 },
    { 0x00020002, 0x00020002, 0x000 },
    { 0x011b00c5, 0x00020125, 0x000 },
    { 0x00020141, 0x00020002, 0x000 },
    { 0x00c50002, 0x0143002e, 0x000 },
    { 0x00a2016b, 0x00020145, 0x000 },
    { 0x00020002, 0x01200002, 0x000 },
    { 0x00020002, 0x010f0103, 0x000 },
    { 0x00090002, 0x000e000e, 0x000 },
    { 0x0058003d, 0x00600002, 0x000 },
    { 0x000200c1, 0x0002028a, 0x000 },
    { 0x00020002, 0x00020002, 0x000 },
    { 0x00020002, 0x00020002, 0x000 },
    { 0x00020002, 0x00020002, 0x000 },
    { 0x00020002, 0x00020002, 0x000 },
    { 0x00020002, 0x00020002, 0x000 },
    { 0x00020002, 0x00020002, 0x000 },
    { 0x00020002, 0x00020002, 0x000 },
    { 0x000502b9, 0x00020008, 0x000 },
};

#endif
static const uint32 ME_JUMP_TABLE_START = 740;
static const uint32 ME_JUMP_TABLE_END   = 768;

#endif
