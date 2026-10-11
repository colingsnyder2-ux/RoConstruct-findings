// from server: 100% by atomic.potato
// roc 2008-06 004bc1a0  unit: ProfiledRakPeer  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bc1a0
//
// 004bc1a0  53                   push ebx
// 004bc1a1  56                   push esi
// 004bc1a2  57                   push edi
// 004bc1a3  6828010000           push 0x128
// 004bc1a8  8bf1                 mov esi, ecx
// 004bc1aa  e871471e00           call 0x6a0920
// 004bc1af  894608               mov dword ptr [esi + 8], eax
// 004bc1b2  33db                 xor ebx, ebx
// 004bc1b4  889820010000         mov byte ptr [eax + 0x120], bl
// 004bc1ba  8b4608               mov eax, dword ptr [esi + 8]
// 004bc1bd  6828010000           push 0x128
// 004bc1c2  89460c               mov dword ptr [esi + 0xc], eax
// 004bc1c5  e856471e00           call 0x6a0920
// 004bc1ca  8b4e08               mov ecx, dword ptr [esi + 8]
// 004bc1cd  83c408               add esp, 8
// 004bc1d0  898124010000         mov dword ptr [ecx + 0x124], eax
// 004bc1d6  8d7b06               lea edi, [ebx + 6]
// 004bc1d9  8da42400000000       lea esp, [esp]
// 004bc1e0  8b5608               mov edx, dword ptr [esi + 8]
// 004bc1e3  8b8224010000         mov eax, dword ptr [edx + 0x124]
// 004bc1e9  6828010000           push 0x128
// 004bc1ee  894608               mov dword ptr [esi + 8], eax
// 004bc1f1  e82a471e00           call 0x6a0920
// 004bc1f6  8b4e08               mov ecx, dword ptr [esi + 8]
// 004bc1f9  898124010000         mov dword ptr [ecx + 0x124], eax
// 004bc1ff  8b5608               mov edx, dword ptr [esi + 8]
// 004bc202  83c404               add esp, 4
// 004bc205  83ef01               sub edi, 1
// 004bc208  889a20010000         mov byte ptr [edx + 0x120], bl
// 004bc20e  75d0                 jne 0x4bc1e0
// 004bc210  8b4608               mov eax, dword ptr [esi + 8]
// 004bc213  8b8824010000         mov ecx, dword ptr [eax + 0x124]
// 004bc219  8b560c               mov edx, dword ptr [esi + 0xc]
// 004bc21c  899124010000         mov dword ptr [ecx + 0x124], edx
// 004bc222  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bc225  894608               mov dword ptr [esi + 8], eax
// 004bc228  8906                 mov dword ptr [esi], eax
// 004bc22a  894604               mov dword ptr [esi + 4], eax
// 004bc22d  5f                   pop edi
// 004bc22e  895e14               mov dword ptr [esi + 0x14], ebx
// 004bc231  895e10               mov dword ptr [esi + 0x10], ebx
// 004bc234  8bc6                 mov eax, esi
// 004bc236  5e                   pop esi
// 004bc237  5b                   pop ebx
// 004bc238  c3                   ret 

extern "C" void* __cdecl sub_6a0920(unsigned int size);

struct S {
    char pad0[8];
    void* m8;
    void* mC;
    int m10;
    int m14;
    S* f();
};

S* S::f()
{
    m8 = sub_6a0920(0x128);
    *(char*)((char*)m8 + 0x120) = 0;
    mC = m8;
    void* p = sub_6a0920(0x128);
    *(void**)((char*)m8 + 0x124) = p;
    int i = 6;
    do {
        void* q = *(void**)((char*)m8 + 0x124);
        m8 = q;
        void* r = sub_6a0920(0x128);
        *(void**)((char*)m8 + 0x124) = r;
        *(char*)((char*)m8 + 0x120) = 0;
        --i;
    } while (i != 0);
    void* a = *(void**)((char*)m8 + 0x124);
    *(void**)((char*)a + 0x124) = mC;
    m8 = mC;
    *(void**)this = mC;
    *(void**)((char*)this + 4) = mC;
    m14 = 0;
    m10 = 0;
    return this;
}
