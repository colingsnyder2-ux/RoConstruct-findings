// from server: 100% by king_originala
// roc 2008-06 004062a0  unit: VCApp::?$CComObject  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004062a0
//
// 004062a0  8b442404             mov eax, dword ptr [esp + 4]
// 004062a4  83f807               cmp eax, 7
// 004062a7  7725                 ja 0x4062ce
// 004062a9  ff2485d4624000       jmp dword ptr [eax*4 + 0x4062d4]
// 004062b0  b815000000           mov eax, 0x15
// 004062b5  c3                   ret 
// 004062b6  b846000000           mov eax, 0x46
// 004062bb  c3                   ret 
// 004062bc  b850000000           mov eax, 0x50
// 004062c1  c3                   ret 
// 004062c2  b8bb010000           mov eax, 0x1bb
// 004062c7  c3                   ret 
// 004062c8  b838040000           mov eax, 0x438
// 004062cd  c3                   ret 
// 004062ce  33c0                 xor eax, eax
// 004062d0  c3                   ret 
// 004062d1  8d4900               lea ecx, [ecx]
// 004062d4  b062                 mov al, 0x62
// 004062d6  40                   inc eax
// 004062d7  00b6624000bc         add byte ptr [esi - 0x43ffbf9e], dh
// 004062dd  624000               bound eax, qword ptr [eax]
// 004062e0  c26240               ret 0x4062
// 004062e3  00ce                 add dh, cl
// 004062e5  624000               bound eax, qword ptr [eax]
// 004062e8  ce                   into 
// 004062e9  624000               bound eax, qword ptr [eax]
// 004062ec  ce                   into 
// 004062ed  624000               bound eax, qword ptr [eax]
// 004062f0  c8624000             enter 0x4062, 0

int __cdecl f(unsigned int value)
{
    switch (value)
    {
    case 0: return 21;
    case 1: return 70;
    case 2: return 80;
    case 3: return 443;
    case 7: return 1080;
    default: return 0;
    }
}
