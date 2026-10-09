// from server: 67% by colin
// roc 2007-08 0054eb70  unit: boost::iostreams::Uoutput::?$filtering_stream  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054eb70
//
// 0054eb70  56                   push esi
// 0054eb71  8bf1                 mov esi, ecx
// 0054eb73  8b460c               mov eax, dword ptr [esi + 0xc]
// 0054eb76  83780800             cmp dword ptr [eax + 8], 0
// 0054eb7a  7515                 jne 0x54eb91
// 0054eb7c  8b5608               mov edx, dword ptr [esi + 8]
// 0054eb7f  33c0                 xor eax, eax
// 0054eb81  50                   push eax
// 0054eb82  8b4204               mov eax, dword ptr [edx + 4]
// 0054eb85  8d4c3008             lea ecx, [eax + esi + 8]
// 0054eb89  ff15d8e47700         call dword ptr [0x77e4d8]
// 0054eb8f  5e                   pop esi
// 0054eb90  c3                   ret 
// 0054eb91  8b4804               mov ecx, dword ptr [eax + 4]
// 0054eb94  57                   push edi
// 0054eb95  8b39                 mov edi, dword ptr [ecx]
// 0054eb97  3bf9                 cmp edi, ecx
// 0054eb99  7506                 jne 0x54eba1
// 0054eb9b  ff15d8e67700         call dword ptr [0x77e6d8]
// 0054eba1  8b4708               mov eax, dword ptr [edi + 8]
// 0054eba4  8b5608               mov edx, dword ptr [esi + 8]
// 0054eba7  5f                   pop edi
// 0054eba8  50                   push eax
// 0054eba9  8b4204               mov eax, dword ptr [edx + 4]
// 0054ebac  8d4c3008             lea ecx, [eax + esi + 8]
// 0054ebb0  ff15d8e47700         call dword ptr [0x77e4d8]
// 0054ebb6  5e                   pop esi
// 0054ebb7  c3                   ret 

struct FilteringStream {
    char pad0[8];
    void* stream;
    void* ios;
    void setbuf(void*);
};

extern "C" void* __stdcall rdbuf_impl(void*, void*);
extern "C" void __stdcall invalid_parameter_noinfo();

void FilteringStream::setbuf(void* p) {
    if (*(int*)((char*)ios + 8) == 0) {
        void* s = *(void**)((char*)stream + 4);
        rdbuf_impl((char*)s + (int)this + 8, p);
        return;
    }
    void* c = *(void**)((char*)ios + 4);
    void* d = *(void**)c;
    if (d == c) {
        invalid_parameter_noinfo();
    }
    void* q = *(void**)((char*)d + 8);
    void* s = *(void**)((char*)stream + 4);
    rdbuf_impl((char*)s + (int)this + 8, q);
}
