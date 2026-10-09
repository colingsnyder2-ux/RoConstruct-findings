// from server: 73% by colin
// roc 2007-08 006b4250  unit: CXTPControlGallery  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b4250
//
// 006b4250  83ec10               sub esp, 0x10
// 006b4253  56                   push esi
// 006b4254  8bf1                 mov esi, ecx
// 006b4256  8d442404             lea eax, [esp + 4]
// 006b425a  50                   push eax
// 006b425b  8d8e88feffff         lea ecx, [esi - 0x178]
// 006b4261  e8fafcffff           call 0x6b3f60
// 006b4266  8b442418             mov eax, dword ptr [esp + 0x18]
// 006b426a  c7400800000000       mov dword ptr [eax + 8], 0
// 006b4271  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 006b4277  83c1ff               add ecx, -1
// 006b427a  33d2                 xor edx, edx
// 006b427c  85c9                 test ecx, ecx
// 006b427e  0f9cc2               setl dl
// 006b4281  83ea01               sub edx, 1
// 006b4284  23ca                 and ecx, edx
// 006b4286  8b542410             mov edx, dword ptr [esp + 0x10]
// 006b428a  2b542408             sub edx, dword ptr [esp + 8]
// 006b428e  89480c               mov dword ptr [eax + 0xc], ecx
// 006b4291  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 006b4294  894814               mov dword ptr [eax + 0x14], ecx
// 006b4297  895010               mov dword ptr [eax + 0x10], edx
// 006b429a  5e                   pop esi
// 006b429b  83c410               add esp, 0x10
// 006b429e  c20400               ret 4

struct Inner {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
};

struct CXTPControlGallery {
    char pad[0x78];
    int field_78;
    char pad2[0x80 - 0x78 - 4];
    int field_80;
    void func_6b4250(Inner* out);
};

extern "C" void __cdecl sub_6b3f60(void* self, Inner* out);

void CXTPControlGallery::func_6b4250(Inner* out)
{
    Inner local;
    sub_6b3f60((char*)this - 0x178, &local);
    out->field_8 = 0;
    int ecx = this->field_80 - 1;
    int edx = (ecx < 0) ? -1 : 0;
    ecx &= edx;
    out->field_c = ecx;
    out->field_14 = this->field_78;
    out->field_10 = local.field_4 - local.field_0;
}
