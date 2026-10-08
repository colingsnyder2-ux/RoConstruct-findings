// from server: 84% by colin
// roc 2007-08 005fa530  unit: RBX::VSeat::?$FactoryProduct  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fa530
//
// 005fa530  8b442404             mov eax, dword ptr [esp + 4]
// 005fa534  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005fa537  8b542408             mov edx, dword ptr [esp + 8]
// 005fa53b  56                   push esi
// 005fa53c  8b7008               mov esi, dword ptr [eax + 8]
// 005fa53f  52                   push edx
// 005fa540  8b91ec000000         mov edx, dword ptr [ecx + 0xec]
// 005fa546  8b1432               mov edx, dword ptr [edx + esi]
// 005fa549  035004               add edx, dword ptr [eax + 4]
// 005fa54c  8b00                 mov eax, dword ptr [eax]
// 005fa54e  8d8c0aec000000       lea ecx, [edx + ecx + 0xec]
// 005fa555  ffd0                 call eax
// 005fa557  5e                   pop esi
// 005fa558  c3                   ret 

struct S {
    void f(void*, int);
};

void S::f(void* a, int b)
{
    char* p = (char*)a;
    int* q = *(int**)(p + 0x10);
    int r = *(int*)(p + 8);
    int s = *(int*)((char*)q + 0xec);
    int t = *(int*)((char*)s + r);
    t += *(int*)(p + 4);
    void (*fn)(void*, int) = *(void (**)(void*, int))p;
    fn((void*)((char*)q + 0xec + t), b);
}
