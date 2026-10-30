// roc 2009-12 00830720  unit: CXTPColorManager  size: 1252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00830720
//
// 00830720  51                   push ecx
// 00830721  53                   push ebx
// 00830722  56                   push esi
// 00830723  57                   push edi
// 00830724  8bf1                 mov esi, ecx
// 00830726  e805f0ffff           call 0x82f730
// 0083072b  83be6801000000       cmp dword ptr [esi + 0x168], 0
// 00830732  7402                 je 0x830736
// 00830734  33c0                 xor eax, eax
// 00830736  48                   dec eax
// 00830737  83f804               cmp eax, 4
// 0083073a  0f87b0020000         ja 0x8309f0
// 00830740  ff2485f00b8300       jmp dword ptr [eax*4 + 0x830bf0]
// 00830747  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0083074d  51                   push ecx
// 0083074e  d91c24               fstp dword ptr [esp]
// 00830751  68002d9600           push 0x962d00
// 00830756  685987d600           push 0xd68759
// 0083075b  8d4e20               lea ecx, [esi + 0x20]
// 0083075e  c78644020000002d9600 mov dword ptr [esi + 0x244], 0x962d00
// 00830768  e8f3e6ffff           call 0x82ee60
// 0083076d  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00830773  51                   push ecx
// 00830774  d91c24               fstp dword ptr [esp]
// 00830777  68c4dafa00           push 0xfadac4
// 0083077c  8d7e40               lea edi, [esi + 0x40]
// 0083077f  689ebef500           push 0xf5be9e
// 00830784  8bcf                 mov ecx, edi
// 00830786  e8d5e6ffff           call 0x82ee60
// 0083078b  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00830791  51                   push ecx
// 00830792  d91c24               fstp dword ptr [esp]
// 00830795  68002d9600           push 0x962d00
// 0083079a  685987d600           push 0xd68759
// 0083079f  8d4e60               lea ecx, [esi + 0x60]
// 008307a2  e8b9e6ffff           call 0x82ee60
// 008307a7  d905dc4a9b00         fld dword ptr [0x9b4adc]
// 008307ad  51                   push ecx
// 008307ae  d91c24               fstp dword ptr [esp]
// 008307b1  6881a9e200           push 0xe2a981
// 008307b6  8d9e80000000         lea ebx, [esi + 0x80]
// 008307bc  68ddecfe00           push 0xfeecdd
// 008307c1  8bcb                 mov ecx, ebx
// 008307c3  e898e6ffff           call 0x82ee60
// 008307c8  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008307ce  51                   push ecx
// 008307cf  d91c24               fstp dword ptr [esp]
// 008307d2  6887ade400           push 0xe4ad87
// 008307d7  68e3efff00           push 0xffefe3
// 008307dc  8d8ea0000000         lea ecx, [esi + 0xa0]
// 008307e2  e879e6ffff           call 0x82ee60
// 008307e7  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008307ed  51                   push ecx
// 008307ee  d91c24               fstp dword ptr [esp]
// 008307f1  6879a1dc00           push 0xdca179
// 008307f6  68cbddf600           push 0xf6ddcb
// 008307fb  8d8ec0000000         lea ecx, [esi + 0xc0]
// 00830801  e85ae6ffff           call 0x82ee60
// 00830806  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0083080c  51                   push ecx
// 0083080d  d91c24               fstp dword ptr [esp]
// 00830810  6893b5e700           push 0xe7b593
// 00830815  68e3efff00           push 0xffefe3
// 0083081a  8d8ee0000000         lea ecx, [esi + 0xe0]
// 00830820  e83be6ffff           call 0x82ee60
// 00830825  e985030000           jmp 0x830baf
// 0083082a  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00830830  51                   push ecx
// 00830831  d91c24               fstp dword ptr [esp]
// 00830834  68637a4400           push 0x447a63
// 00830839  68afc08200           push 0x82c0af
// 0083083e  8d4e20               lea ecx, [esi + 0x20]
// 00830841  c7864402000060805800 mov dword ptr [esi + 0x244], 0x588060
// 0083084b  e810e6ffff           call 0x82ee60
// 00830850  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00830856  51                   push ecx
// 00830857  d91c24               fstp dword ptr [esp]
// 0083085a  68f2f1e400           push 0xe4f1f2
// 0083085f  8d7e40               lea edi, [esi + 0x40]
// 00830862  68d9d9a700           push 0xa7d9d9
// 00830867  8bcf                 mov ecx, edi
// 00830869  e8f2e5ffff           call 0x82ee60
// 0083086e  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00830874  51                   push ecx
// 00830875  d91c24               fstp dword ptr [esp]
// 00830878  68495b4300           push 0x435b49
// 0083087d  68788e6f00           push 0x6f8e78
// 00830882  8d4e60               lea ecx, [esi + 0x60]
// 00830885  e8d6e5ffff           call 0x82ee60
// 0083088a  d905fcf29a00         fld dword ptr [0x9af2fc]
// 00830890  51                   push ecx
// 00830891  d91c24               fstp dword ptr [esp]
// 00830894  68b7c69100           push 0x91c6b7
// 00830899  8d9e80000000         lea ebx, [esi + 0x80]
// 0083089f  68f4f7de00           push 0xdef7f4
// 008308a4  8bcb                 mov ecx, ebx
// 008308a6  e8b5e5ffff           call 0x82ee60
// 008308ab  d905fcf29a00         fld dword ptr [0x9af2fc]
// 008308b1  51                   push ecx
// 008308b2  d91c24               fstp dword ptr [esp]
// 008308b5  68b8c79200           push 0x92c7b8
// 008308ba  68ffffed00           push 0xedffff
// 008308bf  8d8ea0000000         lea ecx, [esi + 0xa0]
// 008308c5  e896e5ffff           call 0x82ee60
// 008308ca  d905fcf29a00         fld dword ptr [0x9af2fc]
// 008308d0  51                   push ecx
// 008308d1  d91c24               fstp dword ptr [esp]
// 008308d4  68a4b47800           push 0x78b4a4
// 008308d9  68e6e6d100           push 0xd1e6e6
// 008308de  8d8ec0000000         lea ecx, [esi + 0xc0]
// 008308e4  e877e5ffff           call 0x82ee60
// 008308e9  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008308ef  51                   push ecx
// 008308f0  d91c24               fstp dword ptr [esp]
// 008308f3  68c2ce9f00           push 0x9fcec2
// 008308f8  68ecf0d500           push 0xd5f0ec
// 008308fd  8d8ee0000000         lea ecx, [esi + 0xe0]
// 00830903  e858e5ffff           call 0x82ee60
// 00830908  e9a2020000           jmp 0x830baf
// 0083090d  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00830913  51                   push ecx
// 00830914  d91c24               fstp dword ptr [esp]
// 00830917  68706f9100           push 0x916f70
// 0083091c  68a8a7bf00           push 0xbfa7a8
// 00830921  8d4e20               lea ecx, [esi + 0x20]
// 00830924  c786440200007c7c9400 mov dword ptr [esi + 0x244], 0x947c7c
// 0083092e  e82de5ffff           call 0x82ee60
// 00830933  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00830939  51                   push ecx
// 0083093a  d91c24               fstp dword ptr [esp]
// 0083093d  68f3f3f700           push 0xf7f3f3
// 00830942  8d7e40               lea edi, [esi + 0x40]
// 00830945  68d7d7e500           push 0xe5d7d7
// 0083094a  8bcf                 mov ecx, edi
// 0083094c  e80fe5ffff           call 0x82ee60
// 00830951  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00830957  51                   push ecx
// 00830958  d91c24               fstp dword ptr [esp]
// 0083095b  6877769700           push 0x977677
// 00830960  68a8a7bf00           push 0xbfa7a8
// 00830965  8d4e60               lea ecx, [esi + 0x60]
// 00830968  e8f3e4ffff           call 0x82ee60
// 0083096d  d905dc4a9b00         fld dword ptr [0x9b4adc]
// 00830973  51                   push ecx
// 00830974  d91c24               fstp dword ptr [esp]
// 00830977  689c9bb700           push 0xb79b9c
// 0083097c  8d9e80000000         lea ebx, [esi + 0x80]
// 00830982  68f9f9ff00           push 0xfff9f9
// 00830987  8bcb                 mov ecx, ebx
// 00830989  e8d2e4ffff           call 0x82ee60
// 0083098e  d905dc4a9b00         fld dword ptr [0x9b4adc]
// 00830994  51                   push ecx
// 00830995  d91c24               fstp dword ptr [esp]
// 00830998  689f9db900           push 0xb99d9f
// 0083099d  68f9f9ff00           push 0xfff9f9
// 008309a2  8d8ea0000000         lea ecx, [esi + 0xa0]
// 008309a8  e8b3e4ffff           call 0x82ee60
// 008309ad  d905dc4a9b00         fld dword ptr [0x9b4adc]
// 008309b3  51                   push ecx
// 008309b4  d91c24               fstp dword ptr [esp]
// 008309b7  68807e9e00           push 0x9e7e80
// 008309bc  68d7d7e200           push 0xe2d7d7
// 008309c1  8d8ec0000000         lea ecx, [esi + 0xc0]
// 008309c7  e894e4ffff           call 0x82ee60
// 008309cc  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008309d2  51                   push ecx
// 008309d3  d91c24               fstp dword ptr [esp]
// 008309d6  68bab9cd00           push 0xcdb9ba
// 008309db  68e9e7f100           push 0xf1e7e9
// 008309e0  8d8ee0000000         lea ecx, [esi + 0xe0]
// 008309e6  e875e4ffff           call 0x82ee60
// 008309eb  e9bf010000           jmp 0x830baf
// 008309f0  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008309f6  55                   push ebp
// 008309f7  51                   push ecx
// 008309f8  d91c24               fstp dword ptr [esp]
// 008309fb  6a10                 push 0x10
// 008309fd  e8fee6ffff           call 0x82f100
// 00830a02  50                   push eax
// 00830a03  6a10                 push 0x10
// 00830a05  e8f6e6ffff           call 0x82f100
// 00830a0a  50                   push eax
// 00830a0b  8d4e20               lea ecx, [esi + 0x20]
// 00830a0e  e84de4ffff           call 0x82ee60
// 00830a13  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00830a19  51                   push ecx
// 00830a1a  d91c24               fstp dword ptr [esp]
// 00830a1d  68d7000000           push 0xd7
// 00830a22  6a05                 push 5
// 00830a24  8bce                 mov ecx, esi
// 00830a26  8d7e40               lea edi, [esi + 0x40]
// 00830a29  e8d2e6ffff           call 0x82f100
// 00830a2e  50                   push eax
// 00830a2f  6a0f                 push 0xf
// 00830a31  e8cae6ffff           call 0x82f100
// 00830a36  50                   push eax
// 00830a37  e814e6ffff           call 0x82f050
// 00830a3c  50                   push eax
// 00830a3d  6a0f                 push 0xf
// 00830a3f  8bce                 mov ecx, esi
// 00830a41  e8bae6ffff           call 0x82f100
// 00830a46  50                   push eax
// 00830a47  8bcf                 mov ecx, edi
// 00830a49  e812e4ffff           call 0x82ee60
// 00830a4e  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00830a54  51                   push ecx
// 00830a55  d91c24               fstp dword ptr [esp]
// 00830a58  6a10                 push 0x10
// 00830a5a  8bce                 mov ecx, esi
// 00830a5c  e89fe6ffff           call 0x82f100
// 00830a61  50                   push eax
// 00830a62  6a0f                 push 0xf
// 00830a64  e897e6ffff           call 0x82f100
// 00830a69  50                   push eax
// 00830a6a  8d4e60               lea ecx, [esi + 0x60]
// 00830a6d  e8eee3ffff           call 0x82ee60
// 00830a72  e859efffff           call 0x82f9d0
// 00830a77  6a0f                 push 0xf
// 00830a79  8bc8                 mov ecx, eax
// 00830a7b  e880e6ffff           call 0x82f100
// 00830a80  8be8                 mov ebp, eax
// 00830a82  e849efffff           call 0x82f9d0
// 00830a87  6a05                 push 5
// 00830a89  8bc8                 mov ecx, eax
// 00830a8b  e870e6ffff           call 0x82f100
// 00830a90  89442410             mov dword ptr [esp + 0x10], eax
// 00830a94  e837efffff           call 0x82f9d0
// 00830a99  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00830a9f  51                   push ecx
// 00830aa0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00830aa4  d91c24               fstp dword ptr [esp]
// 00830aa7  55                   push ebp
// 00830aa8  68cd000000           push 0xcd
// 00830aad  51                   push ecx
// 00830aae  6a0f                 push 0xf
// 00830ab0  8bc8                 mov ecx, eax
// 00830ab2  8d9e80000000         lea ebx, [esi + 0x80]
// 00830ab8  e843e6ffff           call 0x82f100
// 00830abd  50                   push eax
// 00830abe  8bce                 mov ecx, esi
// 00830ac0  e88be5ffff           call 0x82f050
// 00830ac5  50                   push eax
// 00830ac6  8bcb                 mov ecx, ebx
// 00830ac8  e893e3ffff           call 0x82ee60
// 00830acd  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00830ad3  51                   push ecx
// 00830ad4  d91c24               fstp dword ptr [esp]
// 00830ad7  6a5d                 push 0x5d
// 00830ad9  6a05                 push 5
// 00830adb  8bce                 mov ecx, esi
// 00830add  e81ee6ffff           call 0x82f100
// 00830ae2  50                   push eax
// 00830ae3  6a0f                 push 0xf
// 00830ae5  e816e6ffff           call 0x82f100
// 00830aea  50                   push eax
// 00830aeb  e860e5ffff           call 0x82f050
// 00830af0  50                   push eax
// 00830af1  6891000000           push 0x91
// 00830af6  6a05                 push 5
// 00830af8  8bce                 mov ecx, esi
// 00830afa  e801e6ffff           call 0x82f100
// 00830aff  50                   push eax
// 00830b00  6a0f                 push 0xf
// 00830b02  e8f9e5ffff           call 0x82f100
// 00830b07  50                   push eax
// 00830b08  e843e5ffff           call 0x82f050
// 00830b0d  50                   push eax
// 00830b0e  8d8ea0000000         lea ecx, [esi + 0xa0]
// 00830b14  e847e3ffff           call 0x82ee60
// 00830b19  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00830b1f  51                   push ecx
// 00830b20  d91c24               fstp dword ptr [esp]
// 00830b23  6a5f                 push 0x5f
// 00830b25  6a10                 push 0x10
// 00830b27  8bce                 mov ecx, esi
// 00830b29  e8d2e5ffff           call 0x82f100
// 00830b2e  50                   push eax
// 00830b2f  6a0f                 push 0xf
// 00830b31  e8cae5ffff           call 0x82f100
// 00830b36  50                   push eax
// 00830b37  e814e5ffff           call 0x82f050
// 00830b3c  50                   push eax
// 00830b3d  6a28                 push 0x28
// 00830b3f  6a05                 push 5
// 00830b41  8bce                 mov ecx, esi
// 00830b43  e8b8e5ffff           call 0x82f100
// 00830b48  50                   push eax
// 00830b49  6a0f                 push 0xf
// 00830b4b  e8b0e5ffff           call 0x82f100
// 00830b50  50                   push eax
// 00830b51  e8fae4ffff           call 0x82f050
// 00830b56  50                   push eax
// 00830b57  8d8ec0000000         lea ecx, [esi + 0xc0]
// 00830b5d  e8fee2ffff           call 0x82ee60
// 00830b62  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00830b68  51                   push ecx
// 00830b69  d91c24               fstp dword ptr [esp]
// 00830b6c  6a2a                 push 0x2a
// 00830b6e  6a05                 push 5
// 00830b70  8bce                 mov ecx, esi
// 00830b72  e889e5ffff           call 0x82f100
// 00830b77  50                   push eax
// 00830b78  6a0f                 push 0xf
// 00830b7a  e881e5ffff           call 0x82f100
// 00830b7f  50                   push eax
// 00830b80  e8cbe4ffff           call 0x82f050
// 00830b85  50                   push eax
// 00830b86  68a5000000           push 0xa5
// 00830b8b  6a05                 push 5
// 00830b8d  8bce                 mov ecx, esi
// 00830b8f  e86ce5ffff           call 0x82f100
// 00830b94  50                   push eax
// 00830b95  6a0f                 push 0xf
// 00830b97  e864e5ffff           call 0x82f100
// 00830b9c  50                   push eax
// 00830b9d  e8aee4ffff           call 0x82f050
// 00830ba2  50                   push eax
// 00830ba3  8d8ee0000000         lea ecx, [esi + 0xe0]
// 00830ba9  e8b2e2ffff           call 0x82ee60
// 00830bae  5d                   pop ebp
// 00830baf  6a00                 push 0
// 00830bb1  8bce                 mov ecx, esi
// 00830bb3  e808e7ffff           call 0x82f2c0
// 00830bb8  85c0                 test eax, eax
// 00830bba  742c                 je 0x830be8
// 00830bbc  e80feeffff           call 0x82f9d0
// 00830bc1  6a0f                 push 0xf
// 00830bc3  8bc8                 mov ecx, eax
// 00830bc5  e836e5ffff           call 0x82f100
// 00830bca  50                   push eax
// 00830bcb  8bcb                 mov ecx, ebx
// 00830bcd  e84eedffff           call 0x82f920
// 00830bd2  e8f9edffff           call 0x82f9d0
// 00830bd7  6a0f                 push 0xf
// 00830bd9  8bc8                 mov ecx, eax
// 00830bdb  e820e5ffff           call 0x82f100
// 00830be0  50                   push eax
// 00830be1  8bcf                 mov ecx, edi
// 00830be3  e838edffff           call 0x82f920
// 00830be8  5f                   pop edi
// 00830be9  5e                   pop esi
// 00830bea  5b                   pop ebx
// 00830beb  59                   pop ecx
// 00830bec  c3                   ret 
// 00830bed  8d4900               lea ecx, [ecx]
// 00830bf0  47                   inc edi
// 00830bf1  07                   pop es
// 00830bf2  83002a               add dword ptr [eax], 0x2a
// 00830bf5  0883000d0983         or byte ptr [ebx - 0x7cf6f300], al
// 00830bfb  004707               add byte ptr [edi + 7], al
// 00830bfe  830047               add dword ptr [eax], 0x47
// 00830c01  07                   pop es
// copied from an identical function in another client (function ?RefreshGradientColors@CXTPColorManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPColorManager.cpp