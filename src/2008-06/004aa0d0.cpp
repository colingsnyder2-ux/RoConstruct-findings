// from server: 100% by king_originala
// roc 2008-06 004aa0d0  unit: CRenderSettings::W4AASamples::?$EnumDesc  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aa0d0
//
// 004aa0d0  56                   push esi
// 004aa0d1  8d442408             lea eax, [esp + 8]
// 004aa0d5  8bf1                 mov esi, ecx
// 004aa0d7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004aa0db  50                   push eax
// 004aa0dc  51                   push ecx
// 004aa0dd  e8aea10a00           call 0x554290
// 004aa0e2  83c404               add esp, 4
// 004aa0e5  50                   push eax
// 004aa0e6  8bce                 mov ecx, esi
// 004aa0e8  e813321400           call 0x5ed300
// 004aa0ed  84c0                 test al, al
// 004aa0ef  7410                 je 0x4aa101
// 004aa0f1  8d542408             lea edx, [esp + 8]
// 004aa0f5  52                   push edx
// 004aa0f6  8bce                 mov ecx, esi
// 004aa0f8  e843ccf9ff           call 0x446d40
// 004aa0fd  5e                   pop esi
// 004aa0fe  c20400               ret 4
// 004aa101  33c0                 xor eax, eax
// 004aa103  5e                   pop esi
// 004aa104  c20400               ret 4

extern "C" int __cdecl lookup(int value);

struct S {
    bool resolve(int value, int &index);
    void *get(const int &index);
    void *f(int value);
};

void *S::f(int value)
{
    if (resolve(lookup(value), value))
        return get(value);
    return 0;
}
