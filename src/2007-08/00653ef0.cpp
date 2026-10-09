// from server: 96% by colin
// roc 2007-08 00653ef0  unit: XTP_REPORTRECORDITEM_METRICS  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653ef0
//
// 00653ef0  53                   push ebx
// 00653ef1  55                   push ebp
// 00653ef2  56                   push esi
// 00653ef3  8bd9                 mov ebx, ecx
// 00653ef5  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 00653ef8  57                   push edi
// 00653ef9  33f6                 xor esi, esi
// 00653efb  e870f9ffff           call 0x653870
// 00653f00  85c0                 test eax, eax
// 00653f02  7e29                 jle 0x653f2d
// 00653f04  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00653f08  56                   push esi
// 00653f09  e812530400           call 0x699220
// 00653f0e  8bf8                 mov edi, eax
// 00653f10  55                   push ebp
// 00653f11  8d4f20               lea ecx, [edi + 0x20]
// 00653f14  ff15b8dc7700         call dword ptr [0x77dcb8]
// 00653f1a  85c0                 test eax, eax
// 00653f1c  7418                 je 0x653f36
// 00653f1e  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 00653f21  83c601               add esi, 1
// 00653f24  e847f9ffff           call 0x653870
// 00653f29  3bf0                 cmp esi, eax
// 00653f2b  7cdb                 jl 0x653f08
// 00653f2d  5f                   pop edi
// 00653f2e  5e                   pop esi
// 00653f2f  5d                   pop ebp
// 00653f30  33c0                 xor eax, eax
// 00653f32  5b                   pop ebx
// 00653f33  c20400               ret 4
// 00653f36  8bc7                 mov eax, edi
// 00653f38  5f                   pop edi
// 00653f39  5e                   pop esi
// 00653f3a  5d                   pop ebp
// 00653f3b  5b                   pop ebx
// 00653f3c  c20400               ret 4

struct XTP_REPORTRECORDITEM_METRICS {
    char pad[0x28];
    void* field28;
    int find(int arg);
};

struct Inner {
    int count();
};

extern "C" int __stdcall sub_699220(int index);
extern "C" int __stdcall g_fn(void* a, const void* b);

int XTP_REPORTRECORDITEM_METRICS::find(int arg)
{
    int i = 0;
    if (((Inner*)field28)->count() > 0) {
        do {
            int item = sub_699220(i);
            if (g_fn((void*)(item + 0x20), (const void*)arg) == 0)
                return item;
            i++;
        } while (i < ((Inner*)field28)->count());
    }
    return 0;
}
