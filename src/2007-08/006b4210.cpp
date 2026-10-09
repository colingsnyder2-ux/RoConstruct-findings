// from server: 60% by colin
// roc 2007-08 006b4210  unit: CXTPControlGallery  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b4210
//
// 006b4210  51                   push ecx
// 006b4211  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b4215  56                   push esi
// 006b4216  50                   push eax
// 006b4217  c744240800000000     mov dword ptr [esp + 8], 0
// 006b421f  e84cfbffff           call 0x6b3d70
// 006b4224  85c0                 test eax, eax
// 006b4226  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006b422a  740f                 je 0x6b423b
// 006b422c  56                   push esi
// 006b422d  8bc8                 mov ecx, eax
// 006b422f  e80cf3ffff           call 0x6b3540
// 006b4234  8bc6                 mov eax, esi
// 006b4236  5e                   pop esi
// 006b4237  59                   pop ecx
// 006b4238  c20800               ret 8
// 006b423b  6854597800           push 0x785954
// 006b4240  8bce                 mov ecx, esi
// 006b4242  ff15b8dd7700         call dword ptr [0x77ddb8]
// 006b4248  8bc6                 mov eax, esi
// 006b424a  5e                   pop esi
// 006b424b  59                   pop ecx
// 006b424c  c20800               ret 8

struct CXTPControlGallery
{
    void* field_0;
    void* InsertItem(void* item, int index);
};

extern "C" void* __stdcall sub_006b3d70(void* item);
extern "C" void __stdcall sub_006b3540(void* item);
extern "C" void __stdcall sub_0077ddb8(const char* msg);

void* CXTPControlGallery::InsertItem(void* item, int index)
{
    void* result = sub_006b3d70(item);
    if (result != 0)
    {
        sub_006b3540(result);
        return item;
    }
    sub_0077ddb8("list<T> too long");
    return item;
}
