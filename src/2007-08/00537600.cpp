// roc 2007-08 00537600  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537600
//
// 00537600  56                   push esi
// 00537601  6a10                 push 0x10
// 00537603  8bf1                 mov esi, ecx
// 00537605  e8ec880f00           call 0x62fef6
// 0053760a  83c404               add esp, 4
// 0053760d  85c0                 test eax, eax
// 0053760f  741d                 je 0x53762e
// 00537611  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00537615  d901                 fld dword ptr [ecx]
// 00537617  c7005c577a00         mov dword ptr [eax], 0x7a575c
// 0053761d  d95804               fstp dword ptr [eax + 4]
// 00537620  d94104               fld dword ptr [ecx + 4]
// 00537623  d95808               fstp dword ptr [eax + 8]
// 00537626  d94108               fld dword ptr [ecx + 8]
// 00537629  d9580c               fstp dword ptr [eax + 0xc]
// 0053762c  eb02                 jmp 0x537630
// 0053762e  33c0                 xor eax, eax
// 00537630  8b0e                 mov ecx, dword ptr [esi]
// 00537632  85c9                 test ecx, ecx
// 00537634  8906                 mov dword ptr [esi], eax
// 00537636  7408                 je 0x537640
// 00537638  8b01                 mov eax, dword ptr [ecx]
// 0053763a  8b10                 mov edx, dword ptr [eax]
// 0053763c  6a01                 push 1
// 0053763e  ffd2                 call edx
// 00537640  8bc6                 mov eax, esi
// 00537642  5e                   pop esi
// 00537643  c20400               ret 4
// library rbxgs/v8datamodel\Gyro.cpp (function ??$?4VVector3@G3D@@@any@boost@@QAEAAV01@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
