// from server: 100% by tester
// roc 2011-06 00563130  unit: seg_00560000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00563130
//
// 00563130  56                   push esi
// 00563131  8b742408             mov esi, dword ptr [esp + 8]
// 00563135  85f6                 test esi, esi
// 00563137  743c                 je 0x563175
// 00563139  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0056313c  85c0                 test eax, eax
// 0056313e  7435                 je 0x563175
// 00563140  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00563143  85c9                 test ecx, ecx
// 00563145  742e                 je 0x563175
// 00563147  8b4034               mov eax, dword ptr [eax + 0x34]
// 0056314a  85c0                 test eax, eax
// 0056314c  740a                 je 0x563158
// 0056314e  50                   push eax
// 0056314f  8b4628               mov eax, dword ptr [esi + 0x28]
// 00563152  50                   push eax
// 00563153  ffd1                 call ecx
// 00563155  83c408               add esp, 8
// 00563158  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0056315b  8b5628               mov edx, dword ptr [esi + 0x28]
// 0056315e  8b4624               mov eax, dword ptr [esi + 0x24]
// 00563161  51                   push ecx
// 00563162  52                   push edx
// 00563163  ffd0                 call eax
// 00563165  83c408               add esp, 8
// 00563168  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0056316f  33c0                 xor eax, eax
// 00563171  5e                   pop esi
// 00563172  c20400               ret 4
// 00563175  b8feffffff           mov eax, 0xfffffffe
// 0056317a  5e                   pop esi
// 0056317b  c20400               ret 4

struct S {
    char pad[0x1c];
    int field_1c;
    char pad2[4];
    int field_24;
    int field_28;
};

int __stdcall sub_72e9b0(S* obj) {
    if (obj != 0 && obj->field_1c != 0 && obj->field_24 != 0) {
        int v = *(int*)(obj->field_1c + 0x34);
        if (v != 0) {
            ((void (__cdecl*)(int, int))obj->field_24)(obj->field_28, v);
        }
        ((void (__cdecl*)(int, int))obj->field_24)(obj->field_28, obj->field_1c);
        obj->field_1c = 0;
        return 0;
    }
    return -2;
}
