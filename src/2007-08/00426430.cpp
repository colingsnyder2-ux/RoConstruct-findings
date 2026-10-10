// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall ReleaseCapture();
extern "C" long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CSelectionTreeCtrl {
    void func_00426430(int, int, int);
};

extern void G1_func_0063023e();
extern void* G1_func_0062ff02(void*);
extern void G1_func_0041f320(void*);
extern void G1_func_0041f110(void*);
extern void* G1_func_006304ae(void*, void*);
extern void G1_func_0040d550(void*);
extern void* G1_func_0040fdb0(void*);
extern void* G1_func_0040fd80(void*);
extern void G1_func_004215e0(void*, void*, void*, void*, void*, void*);
extern void G1_func_004108b0(void*, int);
extern void G1_func_005595a0(void*);
extern void G1_func_00492360(void*);

void CSelectionTreeCtrl::func_00426430(int a, int b, int c)
{
    G1_func_0063023e();
    if (*(int*)((char*)this + 0xec) != 0)
    {
        void* p = G1_func_0062ff02(*(void**)((char*)this + 0x20));
        G1_func_0041f320(*(void**)((char*)p + 0x94));
        void* q = G1_func_0062ff02(*(void**)((char*)this + 0x20));
        G1_func_0041f110(*(void**)((char*)q + 0x94));
        ReleaseCapture();
        int* obj = *(int**)((char*)this + 0xec);
        if (obj != 0)
        {
            int* vt = *(int**)obj;
            void (*fn)(void*, int) = *(void (**)(void*, int))(vt + 1);
            fn(obj, 1);
        }
        *(int*)((char*)this + 0xec) = 0;
        void* hwnd = *(void**)((char*)this + 0x20);
        void* res = (void*)SendMessageA(hwnd, 0x110a, 8, 0);
        if (res != 0)
        {
            void* r = G1_func_006304ae(this, res);
            if (r != 0)
            {
                int ebx = *(int*)((char*)r + 0xc);
                int eax = *(int*)((char*)r + 0x10);
                if (eax != 0)
                {
                    _InterlockedExchangeAdd((volatile long*)(eax + 4), 1);
                }
                int e4 = *(int*)((char*)this + 0xe4);
                int e8 = *(int*)((char*)this + 0xe8);
                if (e8 != 0)
                {
                    _InterlockedExchangeAdd((volatile long*)(e8 + 4), 1);
                }
                G1_func_0040d550((void*)0);
                if (ebx != 0)
                {
                    int* vt = *(int**)this;
                    int (*fn1)(void*, void*) = *(int (**)(void*, void*))(vt + 0x148/4);
                    int r1 = fn1(this, (void*)0);
                    int v1 = *(int*)G1_func_0040fdb0((void*)r1);
                    int* vt2 = *(int**)this;
                    int (*fn2)(void*, void*) = *(int (**)(void*, void*))(vt2 + 0x148/4);
                    int r2 = fn2(this, (void*)0);
                    int v2 = *(int*)G1_func_0040fd80((void*)r2);
                    G1_func_004215e0((void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0);
                }
                int e4b = *(int*)((char*)this + 0xe4);
                int* edi = (int*)(e4b + 0x160);
                G1_func_004108b0(edi, -1);
                edi[1] = -1;
                int e4c = *(int*)((char*)this + 0xe4);
                int* vt3 = *(int**)(e4c + 0x160);
                void (*fn3)(void*, int) = *(void (**)(void*, int))(vt3 + 1);
                fn3((void*)(e4c + 0x160), 1);
                G1_func_005595a0((void*)0);
                G1_func_00492360((void*)0);
            }
        }
        void* hwnd2 = *(void**)((char*)this + 0x20);
        SendMessageA(hwnd2, 0x110b, 8, 0);
    }
}
