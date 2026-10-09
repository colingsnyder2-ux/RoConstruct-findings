// from server: 69% by colin
// roc 2007-08 00588610  unit: RBX::SoundChannel  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588610
//
// 00588610  8b442404             mov eax, dword ptr [esp + 4]
// 00588614  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00588618  53                   push ebx
// 00588619  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0058861d  56                   push esi
// 0058861e  8bf1                 mov esi, ecx
// 00588620  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00588624  57                   push edi
// 00588625  894e04               mov dword ptr [esi + 4], ecx
// 00588628  8d7e0c               lea edi, [esi + 0xc]
// 0058862b  53                   push ebx
// 0058862c  8bcf                 mov ecx, edi
// 0058862e  8906                 mov dword ptr [esi], eax
// 00588630  895608               mov dword ptr [esi + 8], edx
// 00588633  ff159ce67700         call dword ptr [0x77e69c]
// 00588639  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0058863c  89471c               mov dword ptr [edi + 0x1c], eax
// 0058863f  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00588642  894f20               mov dword ptr [edi + 0x20], ecx
// 00588645  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 00588648  85db                 test ebx, ebx
// 0058864a  895f24               mov dword ptr [edi + 0x24], ebx
// 0058864d  740c                 je 0x58865b
// 0058864f  83c304               add ebx, 4
// 00588652  ba01000000           mov edx, 1
// 00588657  f00fc113             lock xadd dword ptr [ebx], edx
// 0058865b  8a442420             mov al, byte ptr [esp + 0x20]
// 0058865f  884634               mov byte ptr [esi + 0x34], al
// 00588662  5f                   pop edi
// 00588663  c6463500             mov byte ptr [esi + 0x35], 0
// 00588667  8bc6                 mov eax, esi
// 00588669  5e                   pop esi
// 0058866a  5b                   pop ebx
// 0058866b  c21400               ret 0x14

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct SoundChannel
{
    void construct(int a, int b, int c, const void* src, char flag);
};

void SoundChannel::construct(int a, int b, int c, const void* src, char flag)
{
    *(int*)((char*)this + 0) = a;
    *(int*)((char*)this + 4) = b;
    *(int*)((char*)this + 8) = c;

    void* dst = (char*)this + 0xc;
    extern void __stdcall string_ctor(void*, const void*);
    string_ctor(dst, src);

    *(int*)((char*)dst + 0x1c) = *(int*)((char*)src + 0x1c);
    *(int*)((char*)dst + 0x20) = *(int*)((char*)src + 0x20);

    int* ref = *(int**)((char*)src + 0x24);
    *(int**)((char*)dst + 0x24) = ref;
    if (ref)
    {
        _InterlockedExchangeAdd((volatile long*)((char*)ref + 4), 1);
    }

    *(char*)((char*)this + 0x34) = flag;
    *(char*)((char*)this + 0x35) = 0;
}
