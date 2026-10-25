// from server: 100% by tester
// roc 2008-06 007a9960  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a9960
//
// 007a9960  56                   push esi
// 007a9961  8b742408             mov esi, dword ptr [esp + 8]
// 007a9965  85f6                 test esi, esi
// 007a9967  743c                 je 0x7a99a5
// 007a9969  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007a996c  85c0                 test eax, eax
// 007a996e  7435                 je 0x7a99a5
// 007a9970  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007a9973  85c9                 test ecx, ecx
// 007a9975  742e                 je 0x7a99a5
// 007a9977  8b4034               mov eax, dword ptr [eax + 0x34]
// 007a997a  85c0                 test eax, eax
// 007a997c  740a                 je 0x7a9988
// 007a997e  50                   push eax
// 007a997f  8b4628               mov eax, dword ptr [esi + 0x28]
// 007a9982  50                   push eax
// 007a9983  ffd1                 call ecx
// 007a9985  83c408               add esp, 8
// 007a9988  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 007a998b  8b5628               mov edx, dword ptr [esi + 0x28]
// 007a998e  8b4624               mov eax, dword ptr [esi + 0x24]
// 007a9991  51                   push ecx
// 007a9992  52                   push edx
// 007a9993  ffd0                 call eax
// 007a9995  83c408               add esp, 8
// 007a9998  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 007a999f  33c0                 xor eax, eax
// 007a99a1  5e                   pop esi
// 007a99a2  c20400               ret 4
// 007a99a5  b8feffffff           mov eax, 0xfffffffe
// 007a99aa  5e                   pop esi
// 007a99ab  c20400               ret 4

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
