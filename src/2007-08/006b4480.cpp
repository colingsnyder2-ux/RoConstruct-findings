// from server: 10% by colin
// roc 2007-08 006b4480  unit: CXTPControlGallery  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b4480
//
// 006b4480  56                   push esi
// 006b4481  8bf1                 mov esi, ecx
// 006b4483  e808f1ffff           call 0x6b3590
// 006b4488  85c0                 test eax, eax
// 006b448a  7415                 je 0x6b44a1
// 006b448c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b4490  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b4494  50                   push eax
// 006b4495  51                   push ecx
// 006b4496  8bce                 mov ecx, esi
// 006b4498  e893c1fbff           call 0x670630
// 006b449d  5e                   pop esi
// 006b449e  c20800               ret 8
// 006b44a1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006b44a5  8b442408             mov eax, dword ptr [esp + 8]
// 006b44a9  52                   push edx
// 006b44aa  50                   push eax
// 006b44ab  8bce                 mov ecx, esi
// 006b44ad  e8cef9ffff           call 0x6b3e80
// 006b44b2  5e                   pop esi
// 006b44b3  c20800               ret 8

struct CXTPControlGallery {
    bool HasGallery();
    void OnGalleryChanged(int, int);
    void OnGalleryChanged2(int, int);

    void SomeMethod(int a, int b);
};

bool CXTPControlGallery::HasGallery()
{
    return false;
}

void CXTPControlGallery::OnGalleryChanged(int a, int b)
{
}

void CXTPControlGallery::OnGalleryChanged2(int a, int b)
{
}

void CXTPControlGallery::SomeMethod(int a, int b)
{
    if (HasGallery())
        OnGalleryChanged(a, b);
    else
        OnGalleryChanged2(a, b);
}
