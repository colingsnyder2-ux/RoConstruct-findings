// from server: 50% by atomic.potato
// roc 2009-06 00637040  unit: RBX::VScriptContext::?$FactoryProduct  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00637040
//
// 00637040  8b442404             mov eax, dword ptr [esp + 4]
// 00637044  8b5008               mov edx, dword ptr [eax + 8]
// 00637047  8b4804               mov ecx, dword ptr [eax + 4]
// 0063704a  8b00                 mov eax, dword ptr [eax]
// 0063704c  03ca                 add ecx, edx
// 0063704e  ffe0                 jmp eax
// 00637050  56                   push esi
// 00637051  8b742410             mov esi, dword ptr [esp + 0x10]
// 00637055  85f6                 test esi, esi
// 00637057  7479                 je 0x6370d2
// 00637059  83fe01               cmp esi, 1
// 0063705c  7474                 je 0x6370d2
// 0063705e  83fe02               cmp esi, 2
// 00637061  7536                 jne 0x637099
// 00637063  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00637067  8b700c               mov esi, dword ptr [eax + 0xc]
// 0063706a  85f6                 test esi, esi
// 0063706c  744e                 je 0x6370bc
// 0063706e  8d4e04               lea ecx, [esi + 4]
// 00637071  83caff               or edx, 0xffffffff
// 00637074  f00fc111             lock xadd dword ptr [ecx], edx
// 00637078  7542                 jne 0x6370bc
// 0063707a  8b06                 mov eax, dword ptr [esi]
// 0063707c  8b5004               mov edx, dword ptr [eax + 4]
// 0063707f  8bce                 mov ecx, esi
// 00637081  ffd2                 call edx
// 00637083  8d4608               lea eax, [esi + 8]
// 00637086  83c9ff               or ecx, 0xffffffff
// 00637089  f00fc108             lock xadd dword ptr [eax], ecx
// 0063708d  752d                 jne 0x6370bc
// 0063708f  8b16                 mov edx, dword ptr [esi]
// 00637091  8b4208               mov eax, dword ptr [edx + 8]
// 00637094  8bce                 mov ecx, esi
// 00637096  5e                   pop esi
// 00637097  ffe0                 jmp eax
// 00637099  83fe03               cmp esi, 3
// 0063709c  7520                 jne 0x6370be
// 0063709e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006370a2  8b0e                 mov ecx, dword ptr [esi]
// 006370a4  68f0cfa000           push 0xa0cff0
// 006370a9  ff15a4e98900         call dword ptr [0x89e9a4]
// 006370af  0fb6c8               movzx ecx, al
// 006370b2  f7d9                 neg ecx
// 006370b4  1bc9                 sbb ecx, ecx
// 006370b6  234c2408             and ecx, dword ptr [esp + 8]
// 006370ba  890e                 mov dword ptr [esi], ecx
// 006370bc  5e                   pop esi
// 006370bd  c3                   ret 
// 006370be  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006370c2  c700f0cfa000         mov dword ptr [eax], 0xa0cff0
// 006370c8  c6400400             mov byte ptr [eax + 4], 0
// 006370cc  c6400500             mov byte ptr [eax + 5], 0
// 006370d0  5e                   pop esi
// 006370d1  c3                   ret 
// 006370d2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006370d6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006370da  85c0                 test eax, eax
// 006370dc  7426                 je 0x637104
// 006370de  8b11                 mov edx, dword ptr [ecx]
// 006370e0  8910                 mov dword ptr [eax], edx
// 006370e2  8b5104               mov edx, dword ptr [ecx + 4]
// 006370e5  895004               mov dword ptr [eax + 4], edx
// 006370e8  8b5108               mov edx, dword ptr [ecx + 8]
// 006370eb  895008               mov dword ptr [eax + 8], edx
// 006370ee  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006370f1  89500c               mov dword ptr [eax + 0xc], edx
// 006370f4  85d2                 test edx, edx
// 006370f6  740c                 je 0x637104
// 006370f8  83c204               add edx, 4
// 006370fb  b801000000           mov eax, 1
// 00637100  f00fc102             lock xadd dword ptr [edx], eax
// 00637104  83fe01               cmp esi, 1
// 00637107  75b3                 jne 0x6370bc
// 00637109  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0063710c  85f6                 test esi, esi
// 0063710e  74ac                 je 0x6370bc
// 00637110  8d4e04               lea ecx, [esi + 4]
// 00637113  83caff               or edx, 0xffffffff
// 00637116  f00fc111             lock xadd dword ptr [ecx], edx
// 0063711a  75a0                 jne 0x6370bc
// 0063711c  8b06                 mov eax, dword ptr [esi]
// 0063711e  8b5004               mov edx, dword ptr [eax + 4]
// 00637121  8bce                 mov ecx, esi
// 00637123  ffd2                 call edx
// 00637125  8d4608               lea eax, [esi + 8]
// 00637128  83c9ff               or ecx, 0xffffffff
// 0063712b  f00fc108             lock xadd dword ptr [eax], ecx
// 0063712f  758b                 jne 0x6370bc
// 00637131  8b16                 mov edx, dword ptr [esi]
// 00637133  8b4208               mov eax, dword ptr [edx + 8]
// 00637136  8bce                 mov ecx, esi
// 00637138  5e                   pop esi
// 00637139  ffe0                 jmp eax

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __cdecl _type_info_equals(void*, void*);

struct VScriptContext {
    void* vptr;
    char pad[8];
    void* ref;
};

struct FactoryProduct {
    void* vptr;
    char pad[8];
    void* ref;
};

void __cdecl sub_637040(void* a, void* b, int c, void* d);

void __cdecl sub_637040(void* a, void* b, int c, void* d)
{
    void* p = *(void**)a;
    int off = *(int*)((char*)a + 4) + *(int*)((char*)a + 8);
    ((void (__cdecl*)(void*, int))p)(b, off);
}

void __cdecl sub_637050(void* self, void* src, int op, void* dst)
{
    int s = op;
    if (s == 0 || s == 1) {
        if (dst) {
            *(int*)((char*)dst + 0) = *(int*)((char*)src + 0);
            *(int*)((char*)dst + 4) = *(int*)((char*)src + 4);
            *(int*)((char*)dst + 8) = *(int*)((char*)src + 8);
            void* r = *(void**)((char*)src + 0xc);
            *(void**)((char*)dst + 0xc) = r;
            if (r) {
                _InterlockedExchangeAdd((volatile long*)((char*)r + 4), 1);
            }
        }
        if (s == 1) {
            void* r = *(void**)((char*)src + 0xc);
            if (r) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)r + 4), -1) == 1) {
                    void** vt = *(void***)r;
                    ((void (__cdecl*)(void*))vt[1])(r);
                    if (_InterlockedExchangeAdd((volatile long*)((char*)r + 8), -1) == 1) {
                        void** vt2 = *(void***)r;
                        ((void (__cdecl*)(void*))vt2[2])(r);
                    }
                }
            }
        }
        return;
    }
    if (s == 2) {
        void* r = *(void**)((char*)src + 0xc);
        if (r) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)r + 4), -1) == 1) {
                void** vt = *(void***)r;
                ((void (__cdecl*)(void*))vt[1])(r);
                if (_InterlockedExchangeAdd((volatile long*)((char*)r + 8), -1) == 1) {
                    void** vt2 = *(void***)r;
                    ((void (__cdecl*)(void*))vt2[2])(r);
                }
            }
        }
        return;
    }
    if (s == 3) {
        void* p = *(void**)src;
        int eq = _type_info_equals(p, (void*)0xa0cff0);
        int m = eq ? -1 : 0;
        *(int*)dst = m & (int)dst;
        return;
    }
    *(int*)dst = 0xa0cff0;
    *(char*)((char*)dst + 4) = 0;
    *(char*)((char*)dst + 5) = 0;
}
