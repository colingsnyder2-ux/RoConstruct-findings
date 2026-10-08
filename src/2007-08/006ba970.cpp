// from server: 78% by colin
// roc 2007-08 006ba970  unit: CXTPControlGalleryOffice2007Theme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ba970
//
// 006ba970  51                   push ecx
// 006ba971  56                   push esi
// 006ba972  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ba976  81c1c4000000         add ecx, 0xc4
// 006ba97c  51                   push ecx
// 006ba97d  8bce                 mov ecx, esi
// 006ba97f  c744240800000000     mov dword ptr [esp + 8], 0
// 006ba987  ff1574dd7700         call dword ptr [0x77dd74]
// 006ba98d  8bc6                 mov eax, esi
// 006ba98f  5e                   pop esi
// 006ba990  59                   pop ecx
// 006ba991  c20400               ret 4

struct CXTPControlGalleryOffice2007Theme
{
    char pad[0xc4];
    void* field_c4;
    void* sub_006ba970(void* param);
};

extern "C" void* __stdcall func_0077dd74(void*, void*);

void* CXTPControlGalleryOffice2007Theme::sub_006ba970(void* param)
{
    void* tmp = 0;
    func_0077dd74(&field_c4, &tmp);
    return param;
}
