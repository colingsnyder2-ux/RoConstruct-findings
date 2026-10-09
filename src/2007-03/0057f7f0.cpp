// roc 2007-03 0057f7f0  unit: seg_00570000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057f7f0
//
// 0057f7f0  56                   push esi
// 0057f7f1  8bf1                 mov esi, ecx
// 0057f7f3  837e1400             cmp dword ptr [esi + 0x14], 0
// 0057f7f7  7509                 jne 0x57f802
// 0057f7f9  56                   push esi
// 0057f7fa  e841fcffff           call 0x57f440
// 0057f7ff  83c404               add esp, 4
// 0057f802  8bc6                 mov eax, esi
// 0057f804  5e                   pop esi
// 0057f805  c3                   ret 
// copied from an identical function in another client (function ?ensure@Log@ns_ROCX000017@@QAEPAU12@XZ)

namespace ns_ROCX000017 {
struct Log {
    char pad[0x14];
    int field14;
    Log* ensure();
};

extern "C" void __cdecl sub_580320(Log*);

Log* Log::ensure() {
    if (field14 == 0) {
        sub_580320(this);
    }
    return this;
}
}
