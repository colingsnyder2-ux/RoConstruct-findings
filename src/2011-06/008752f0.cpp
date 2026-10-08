// roc 2011-06 008752f0  unit: CXTPToolTipContextToolTip  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008752f0
//
// 008752f0  56                   push esi
// 008752f1  8bf1                 mov esi, ecx
// 008752f3  e848ac0000           call 0x87ff40
// 008752f8  8b10                 mov edx, dword ptr [eax]
// 008752fa  8bc8                 mov ecx, eax
// 008752fc  8b4218               mov eax, dword ptr [edx + 0x18]
// 008752ff  685f240000           push 0x245f
// 00875304  ffd0                 call eax
// 00875306  8986ac000000         mov dword ptr [esi + 0xac], eax
// 0087530c  85c0                 test eax, eax
// 0087530e  7504                 jne 0x875314
// 00875310  33c0                 xor eax, eax
// 00875312  5e                   pop esi
// 00875313  c3                   ret 
// 00875314  e827ac0000           call 0x87ff40
// 00875319  8b10                 mov edx, dword ptr [eax]
// 0087531b  8bc8                 mov ecx, eax
// 0087531d  8b4218               mov eax, dword ptr [edx + 0x18]
// 00875320  685c240000           push 0x245c
// 00875325  ffd0                 call eax
// 00875327  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 0087532d  85c0                 test eax, eax
// 0087532f  74df                 je 0x875310
// 00875331  e80aac0000           call 0x87ff40
// 00875336  8b10                 mov edx, dword ptr [eax]
// 00875338  8bc8                 mov ecx, eax
// 0087533a  8b4218               mov eax, dword ptr [edx + 0x18]
// 0087533d  685d240000           push 0x245d
// 00875342  ffd0                 call eax
// 00875344  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0087534a  85c0                 test eax, eax
// 0087534c  74c2                 je 0x875310
// 0087534e  57                   push edi
// 0087534f  e8c84ff9ff           call 0x80a31c
// 00875354  8b3d081aa400         mov edi, dword ptr [0xa41a08]
// 0087535a  68897f0000           push 0x7f89
// 0087535f  6a00                 push 0
// 00875361  ffd7                 call edi
// 00875363  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 00875369  85c0                 test eax, eax
// 0087536b  7519                 jne 0x875386
// 0087536d  e8ceab0000           call 0x87ff40
// 00875372  8b10                 mov edx, dword ptr [eax]
// 00875374  8bc8                 mov ecx, eax
// 00875376  8b4218               mov eax, dword ptr [edx + 0x18]
// 00875379  68f5260000           push 0x26f5
// 0087537e  ffd0                 call eax
// 00875380  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 00875386  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 0087538d  743a                 je 0x8753c9
// 0087538f  e8acab0000           call 0x87ff40
// 00875394  8b10                 mov edx, dword ptr [eax]
// 00875396  8bc8                 mov ecx, eax
// 00875398  8b4218               mov eax, dword ptr [edx + 0x18]
// 0087539b  68f2260000           push 0x26f2
// 008753a0  ffd0                 call eax
// 008753a2  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 008753a8  85c0                 test eax, eax
// 008753aa  741d                 je 0x8753c9
// 008753ac  e88fab0000           call 0x87ff40
// 008753b1  8b10                 mov edx, dword ptr [eax]
// 008753b3  8bc8                 mov ecx, eax
// 008753b5  8b4218               mov eax, dword ptr [edx + 0x18]
// 008753b8  68f3260000           push 0x26f3
// 008753bd  ffd0                 call eax
// 008753bf  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 008753c5  85c0                 test eax, eax
// 008753c7  7505                 jne 0x8753ce
// 008753c9  5f                   pop edi
// 008753ca  33c0                 xor eax, eax
// 008753cc  5e                   pop esi
// 008753cd  c3                   ret 
// 008753ce  e8494ff9ff           call 0x80a31c
// 008753d3  68867f0000           push 0x7f86
// 008753d8  6a00                 push 0
// 008753da  ffd7                 call edi
// 008753dc  33c9                 xor ecx, ecx
// 008753de  85c0                 test eax, eax
// 008753e0  0f95c1               setne cl
// 008753e3  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 008753e9  5f                   pop edi
// 008753ea  5e                   pop esi
// 008753eb  8bc1                 mov eax, ecx
// 008753ed  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTGlobal.cpp (function ?LoadSysCursors@CXTAuxData@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTGlobal.cpp
