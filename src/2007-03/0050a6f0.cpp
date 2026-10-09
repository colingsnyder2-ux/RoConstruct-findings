// roc 2007-03 0050a6f0  unit: seg_00500000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0050a6f0
//
// 0050a6f0  56                   push esi
// 0050a6f1  8b742408             mov esi, dword ptr [esp + 8]
// 0050a6f5  f6861c01000020       test byte ptr [esi + 0x11c], 0x20
// 0050a6fc  7411                 je 0x50a70f
// 0050a6fe  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0050a701  2500030000           and eax, 0x300
// 0050a706  3d00030000           cmp eax, 0x300
// 0050a70b  750b                 jne 0x50a718
// 0050a70d  5e                   pop esi
// 0050a70e  c3                   ret 
// 0050a70f  f7466c00080000       test dword ptr [esi + 0x6c], 0x800
// 0050a716  751c                 jne 0x50a734
// 0050a718  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050a71c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0050a720  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0050a726  51                   push ecx
// 0050a727  52                   push edx
// 0050a728  50                   push eax
// 0050a729  e892332200           call 0x72dac0
// 0050a72e  898610010000         mov dword ptr [esi + 0x110], eax
// 0050a734  5e                   pop esi
// 0050a735  c3                   ret 
// copied from an identical function in another client (function ?G3D_DialogTemplate_method@ns_ROCX000002@@YAXPAUG3D_DialogTemplate@1@PAX11@Z)

namespace ns_ROCX000002 {
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
