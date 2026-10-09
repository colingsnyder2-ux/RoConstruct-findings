// from server: 66% by colin
// roc 2007-08 0056acc0  unit: ArchiveBinder  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056acc0
//
// 0056acc0  8b442404             mov eax, dword ptr [esp + 4]
// 0056acc4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056acc8  53                   push ebx
// 0056acc9  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0056accd  56                   push esi
// 0056acce  8bf1                 mov esi, ecx
// 0056acd0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056acd4  57                   push edi
// 0056acd5  894e04               mov dword ptr [esi + 4], ecx
// 0056acd8  8d7e0c               lea edi, [esi + 0xc]
// 0056acdb  53                   push ebx
// 0056acdc  8bcf                 mov ecx, edi
// 0056acde  8906                 mov dword ptr [esi], eax
// 0056ace0  895608               mov dword ptr [esi + 8], edx
// 0056ace3  ff159ce67700         call dword ptr [0x77e69c]
// 0056ace9  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0056acec  89471c               mov dword ptr [edi + 0x1c], eax
// 0056acef  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0056acf2  85c0                 test eax, eax
// 0056acf4  894720               mov dword ptr [edi + 0x20], eax
// 0056acf7  740c                 je 0x56ad05
// 0056acf9  83c004               add eax, 4
// 0056acfc  b901000000           mov ecx, 1
// 0056ad01  f00fc108             lock xadd dword ptr [eax], ecx
// 0056ad05  8a542420             mov dl, byte ptr [esp + 0x20]
// 0056ad09  5f                   pop edi
// 0056ad0a  885630               mov byte ptr [esi + 0x30], dl
// 0056ad0d  c6463100             mov byte ptr [esi + 0x31], 0
// 0056ad11  8bc6                 mov eax, esi
// 0056ad13  5e                   pop esi
// 0056ad14  5b                   pop ebx
// 0056ad15  c21400               ret 0x14

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ArchiveBinder {
    int field0;
    int field4;
    int field8;
    char padC[0x0C];
    int field18;
    int field1C;
    int field20;
    char pad24[0x0C];
    char field30;
    char field31;
    ArchiveBinder* construct(int a, int b, int c, int d, char e);
};

extern "C" void __stdcall sub_77e69c(void*, void*);

ArchiveBinder* ArchiveBinder::construct(int a, int b, int c, int d, char e)
{
    this->field0 = a;
    this->field4 = c;
    this->field8 = b;
    sub_77e69c(&this->padC[0], (void*)d);
    this->field1C = *(int*)(d + 0x1C);
    int v = *(int*)(d + 0x20);
    this->field20 = v;
    if (v != 0) {
        _InterlockedExchangeAdd((volatile long*)(v + 4), 1);
    }
    this->field30 = e;
    this->field31 = 0;
    return this;
}
