// from server: 100% by tester
// roc 2008-06 0063cc00  unit: RBX::VSeat::?$FactoryProduct  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063cc00
//
// 0063cc00  8b442404             mov eax, dword ptr [esp + 4]
// 0063cc04  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0063cc07  8b542408             mov edx, dword ptr [esp + 8]
// 0063cc0b  56                   push esi
// 0063cc0c  8b7008               mov esi, dword ptr [eax + 8]
// 0063cc0f  52                   push edx
// 0063cc10  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 0063cc16  8b1432               mov edx, dword ptr [edx + esi]
// 0063cc19  035004               add edx, dword ptr [eax + 4]
// 0063cc1c  8b00                 mov eax, dword ptr [eax]
// 0063cc1e  8d8c0a34010000       lea ecx, [edx + ecx + 0x134]
// 0063cc25  ffd0                 call eax
// 0063cc27  5e                   pop esi
// 0063cc28  c3                   ret 

struct FactoryProduct {
};

void __cdecl invoke(void* arg1, void* arg2)
{
    char* p = (char*)arg1;
    void* vtable = *(void**)p;
    int offset = *(int*)(p + 8);
    char* base = *(char**)(p + 0x10);
    int delta = *(int*)(base + 0x134);
    int index = *(int*)(delta + offset);
    int total = index + *(int*)(p + 4);
    char* self = base + 0x134 + total;
    ((void (__thiscall*)(void*, void*))vtable)(self, arg2);
}