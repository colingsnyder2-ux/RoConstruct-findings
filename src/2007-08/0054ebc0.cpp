// from server: 73% by colin
// roc 2007-08 0054ebc0  unit: boost::iostreams::Uinput::?$filtering_stream  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ebc0
//
// 0054ebc0  56                   push esi
// 0054ebc1  8bf1                 mov esi, ecx
// 0054ebc3  8b4610               mov eax, dword ptr [esi + 0x10]
// 0054ebc6  83780800             cmp dword ptr [eax + 8], 0
// 0054ebca  7515                 jne 0x54ebe1
// 0054ebcc  8b5608               mov edx, dword ptr [esi + 8]
// 0054ebcf  33c0                 xor eax, eax
// 0054ebd1  50                   push eax
// 0054ebd2  8b4204               mov eax, dword ptr [edx + 4]
// 0054ebd5  8d4c3008             lea ecx, [eax + esi + 8]
// 0054ebd9  ff15d8e47700         call dword ptr [0x77e4d8]
// 0054ebdf  5e                   pop esi
// 0054ebe0  c3                   ret 
// 0054ebe1  8b4804               mov ecx, dword ptr [eax + 4]
// 0054ebe4  57                   push edi
// 0054ebe5  8b39                 mov edi, dword ptr [ecx]
// 0054ebe7  3bf9                 cmp edi, ecx
// 0054ebe9  7506                 jne 0x54ebf1
// 0054ebeb  ff15d8e67700         call dword ptr [0x77e6d8]
// 0054ebf1  8b4708               mov eax, dword ptr [edi + 8]
// 0054ebf4  8b5608               mov edx, dword ptr [esi + 8]
// 0054ebf7  5f                   pop edi
// 0054ebf8  50                   push eax
// 0054ebf9  8b4204               mov eax, dword ptr [edx + 4]
// 0054ebfc  8d4c3008             lea ecx, [eax + esi + 8]
// 0054ec00  ff15d8e47700         call dword ptr [0x77e4d8]
// 0054ec06  5e                   pop esi
// 0054ec07  c3                   ret 

extern "C" void* __stdcall sub_77E4D8(void*, void*);
extern "C" void __stdcall sub_77E6D8();

struct S {
    char pad0[8];
    void* field8;
    char padC[4];
    void* field10;
    void* f();
};

void* S::f()
{
    void* p = field10;
    if (*(int*)((char*)p + 8) == 0) {
        void* q = field8;
        void* r = *(void**)((char*)q + 4);
        return sub_77E4D8((char*)this + 8 + (int)r, 0);
    }
    void* c = *(void**)((char*)p + 4);
    void* d = *(void**)c;
    if (d == c) {
        sub_77E6D8();
    }
    void* e = *(void**)((char*)d + 8);
    void* q = field8;
    void* r = *(void**)((char*)q + 4);
    return sub_77E4D8((char*)this + 8 + (int)r, e);
}
