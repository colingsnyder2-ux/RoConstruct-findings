// roc 2011-06 00550850  unit: seg_00550000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00550850
//
// 00550850  56                   push esi
// 00550851  8b742408             mov esi, dword ptr [esp + 8]
// 00550855  f6861c01000020       test byte ptr [esi + 0x11c], 0x20
// 0055085c  7411                 je 0x55086f
// 0055085e  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00550861  2500030000           and eax, 0x300
// 00550866  3d00030000           cmp eax, 0x300
// 0055086b  750b                 jne 0x550878
// 0055086d  5e                   pop esi
// 0055086e  c3                   ret 
// 0055086f  f7466c00080000       test dword ptr [esi + 0x6c], 0x800
// 00550876  751c                 jne 0x550894
// 00550878  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055087c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00550880  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00550886  51                   push ecx
// 00550887  52                   push edx
// 00550888  50                   push eax
// 00550889  e852110100           call 0x5619e0
// 0055088e  898610010000         mov dword ptr [esi + 0x110], eax
// 00550894  5e                   pop esi
// 00550895  c3                   ret 
// copied from an identical function in another client (function ?G3D_DialogTemplate_method@ns_ROCX000001@@YAXPAUG3D_DialogTemplate@1@PAX11@Z)

namespace ns_ROCX000001 {
struct G3D_DialogTemplate {
    char pad[0x6c];
    unsigned int flags;
    char pad2[0x110 - 0x70];
    void* field_110;
    char pad3[0x11c - 0x114];
    unsigned char byte_11c;
};

extern "C" void* __stdcall sub_0072d160(void*, void*, void*);

void G3D_DialogTemplate_method(G3D_DialogTemplate* self, void* a, void* b, void* c)
{
    if ((self->byte_11c & 0x20) != 0) {
        unsigned int v = self->flags & 0x300;
        if (v != 0x300)
            goto do_call;
        return;
    } else {
        if ((self->flags & 0x800) != 0)
            return;
    }
do_call:
    self->field_110 = sub_0072d160(self->field_110, a, b);
}
}
