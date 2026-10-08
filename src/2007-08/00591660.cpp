// roc 2007-08 00591660  unit: RBX::ObjectValue  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591660
//
// 00591660  56                   push esi
// 00591661  8bf1                 mov esi, ecx
// 00591663  e8280dffff           call 0x582390
// 00591668  e8c3c8ffff           call 0x58df30
// 0059166d  e89ec9ffff           call 0x58e010
// 00591672  e889cdffff           call 0x58e400
// 00591677  e804caffff           call 0x58e080
// 0059167c  e8affbffff           call 0x591230
// 00591681  e81afcffff           call 0x5912a0
// 00591686  e865caffff           call 0x58e0f0
// 0059168b  e8d0caffff           call 0x58e160
// 00591690  e81b8bfbff           call 0x54a1b0
// 00591695  e8660dffff           call 0x582400
// 0059169a  e881ccffff           call 0x58e320
// 0059169f  e81ccfffff           call 0x58e5c0
// 005916a4  e8e76fe8ff           call 0x418690
// 005916a9  e812c8ffff           call 0x58dec0
// 005916ae  e88dcbffff           call 0x58e240
// 005916b3  e818cbffff           call 0x58e1d0
// 005916b8  e8d3c4faff           call 0x53db90
// 005916bd  e8eecbffff           call 0x58e2b0
// 005916c2  e8f914faff           call 0x532bc0
// 005916c7  e8d4c8ffff           call 0x58dfa0
// 005916cc  e87fc7ffff           call 0x58de50
// 005916d1  e83a32ecff           call 0x454910
// 005916d6  e8b5ccffff           call 0x58e390
// 005916db  e890fcffff           call 0x591370
// 005916e0  e88bcdffff           call 0x58e470
// 005916e5  e8f6cdffff           call 0x58e4e0
// 005916ea  e861ceffff           call 0x58e550
// 005916ef  e80cf9ffff           call 0x591000
// 005916f4  e8c7faffff           call 0x5911c0
// 005916f9  e872f9ffff           call 0x591070
// 005916fe  e8ddf9ffff           call 0x5910e0
// 00591703  e848faffff           call 0x591150
// 00591708  e813f8ffff           call 0x590f20
// 0059170d  e87ef8ffff           call 0x590f90
// 00591712  e8f9f4ffff           call 0x590c10
// 00591717  e864f5ffff           call 0x590c80
// 0059171c  e81f97ffff           call 0x58ae40
// 00591721  e84abb0500           call 0x5ed270
// 00591726  e885600600           call 0x5f77b0
// 0059172b  8bc6                 mov eax, esi
// 0059172d  5e                   pop esi
// 0059172e  c3                   ret 
// library rbxgs/v8datamodel\factoryregistration.cpp (function ??0FactoryRegistrator@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/factoryregistration.cpp
