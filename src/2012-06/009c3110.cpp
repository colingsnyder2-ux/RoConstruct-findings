// roc 2012-06 009c3110  unit: CXTPControls  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c3110
//
// 009c3110  56                   push esi
// 009c3111  57                   push edi
// 009c3112  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009c3116  8bf1                 mov esi, ecx
// 009c3118  6a00                 push 0
// 009c311a  8d462c               lea eax, [esi + 0x2c]
// 009c311d  50                   push eax
// 009c311e  68ec2fc100           push 0xc12fec
// 009c3123  57                   push edi
// 009c3124  e8f7510100           call 0x9d8320
// 009c3129  6a00                 push 0
// 009c312b  8d4e30               lea ecx, [esi + 0x30]
// 009c312e  51                   push ecx
// 009c312f  68e42fc100           push 0xc12fe4
// 009c3134  57                   push edi
// 009c3135  e8e6510100           call 0x9d8320
// 009c313a  68e83bb400           push 0xb43be8
// 009c313f  8d5640               lea edx, [esi + 0x40]
// 009c3142  52                   push edx
// 009c3143  68e80ec100           push 0xc10ee8
// 009c3148  57                   push edi
// 009c3149  e8c2520100           call 0x9d8410
// 009c314e  68e83bb400           push 0xb43be8
// 009c3153  8d4650               lea eax, [esi + 0x50]
// 009c3156  50                   push eax
// 009c3157  68d42fc100           push 0xc12fd4
// 009c315c  57                   push edi
// 009c315d  e8ae520100           call 0x9d8410
// 009c3162  83c440               add esp, 0x40
// 009c3165  68e83bb400           push 0xb43be8
// 009c316a  8d4e44               lea ecx, [esi + 0x44]
// 009c316d  51                   push ecx
// 009c316e  68c82fc100           push 0xc12fc8
// 009c3173  57                   push edi
// 009c3174  e897520100           call 0x9d8410
// 009c3179  68e83bb400           push 0xb43be8
// 009c317e  8d5648               lea edx, [esi + 0x48]
// 009c3181  52                   push edx
// 009c3182  68b82fc100           push 0xc12fb8
// 009c3187  57                   push edi
// 009c3188  e883520100           call 0x9d8410
// 009c318d  68e83bb400           push 0xb43be8
// 009c3192  83c64c               add esi, 0x4c
// 009c3195  56                   push esi
// 009c3196  68ac2fc100           push 0xc12fac
// 009c319b  57                   push edi
// 009c319c  e86f520100           call 0x9d8410
// 009c31a1  83c430               add esp, 0x30
// 009c31a4  5f                   pop edi
// 009c31a5  5e                   pop esi
// 009c31a6  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlAction@@QAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
