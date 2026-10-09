// roc 2008-06 005c38f0  unit: RBX::VSparkles::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c38f0
//
// 005c38f0  64a100000000         mov eax, dword ptr fs:[0]
// 005c38f6  6aff                 push -1
// 005c38f8  681e487d00           push 0x7d481e
// 005c38fd  50                   push eax
// 005c38fe  b801000000           mov eax, 1
// 005c3903  64892500000000       mov dword ptr fs:[0], esp
// 005c390a  8405c8939700         test byte ptr [0x9793c8], al
// 005c3910  7530                 jne 0x5c3942
// 005c3912  0905c8939700         or dword ptr [0x9793c8], eax
// 005c3918  686cbe9500           push 0x95be6c
// 005c391d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c3925  e8c68efdff           call 0x59c7f0
// 005c392a  50                   push eax
// 005c392b  b908939700           mov ecx, 0x979308
// 005c3930  e8bbcffaff           call 0x5708f0
// 005c3935  6840e77f00           push 0x7fe740
// 005c393a  e870de0d00           call 0x6a17af
// 005c393f  83c404               add esp, 4
// 005c3942  8b0c24               mov ecx, dword ptr [esp]
// 005c3945  b808939700           mov eax, 0x979308
// 005c394a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3951  83c40c               add esp, 0xc
// 005c3954  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
