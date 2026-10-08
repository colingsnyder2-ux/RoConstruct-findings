// from server: 100% by colin
// roc 2007-08 006b7f20  unit: CXTPControlGallery  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b7f20
//
// 006b7f20  56                   push esi
// 006b7f21  8bf1                 mov esi, ecx
// 006b7f23  e89859f8ff           call 0x63d8c0
// 006b7f28  33c0                 xor eax, eax
// 006b7f2a  898628010000         mov dword ptr [esi + 0x128], eax
// 006b7f30  898630010000         mov dword ptr [esi + 0x130], eax
// 006b7f36  c7062c657d00         mov dword ptr [esi], 0x7d652c
// 006b7f3c  c7863c04000012000000 mov dword ptr [esi + 0x43c], 0x12
// 006b7f46  8bc6                 mov eax, esi
// 006b7f48  5e                   pop esi
// 006b7f49  c3                   ret 

struct CXTPControlGallery
{
    CXTPControlGallery* Construct();
};

extern "C" void __fastcall sub_63d8c0(CXTPControlGallery* self);

CXTPControlGallery* CXTPControlGallery::Construct()
{
    sub_63d8c0(this);
    *(int*)((char*)this + 0x128) = 0;
    *(int*)((char*)this + 0x130) = 0;
    *(int*)((char*)this) = 0x7d652c;
    *(int*)((char*)this + 0x43c) = 0x12;
    return this;
}
