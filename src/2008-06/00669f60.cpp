// from server: 100% by atomic.potato
// roc 2008-06 00669f60  unit: RBX::TreeStage  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669f60
//
// 00669f60  8b442404             mov eax, dword ptr [esp + 4]
// 00669f64  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00669f68  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00669f6b  7205                 jb 0x669f72
// 00669f6d  8b4004               mov eax, dword ptr [eax + 4]
// 00669f70  eb03                 jmp 0x669f75
// 00669f72  83c004               add eax, 4
// 00669f75  51                   push ecx
// 00669f76  50                   push eax
// 00669f77  8d44240c             lea eax, [esp + 0xc]
// 00669f7b  50                   push eax
// 00669f7c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00669f84  e887ffffff           call 0x669f10
// 00669f89  8b442410             mov eax, dword ptr [esp + 0x10]
// 00669f8d  83c40c               add esp, 0xc
// 00669f90  c3                   ret 

extern "C" void __cdecl sub_669f10(int* out, const char* data, int len);

int __cdecl f(char* p) {
    int len;
    char* data;
    if (*(unsigned int*)(p + 0x18) >= 0x10) {
        len = *(int*)(p + 0x14);
        data = *(char**)(p + 4);
    } else {
        len = *(int*)(p + 0x14);
        data = p + 4;
    }
    int result = 0;
    sub_669f10(&result, data, len);
    return result;
}
