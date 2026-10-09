// from server: 56% by colin
// roc 2007-08 00545650  unit: RBX::MD5HasherImpl  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00545650
//
// 00545650  81ec00040000         sub esp, 0x400
// 00545656  56                   push esi
// 00545657  8bb42408040000       mov esi, dword ptr [esp + 0x408]
// 0054565e  8b06                 mov eax, dword ptr [esi]
// 00545660  57                   push edi
// 00545661  8bf9                 mov edi, ecx
// 00545663  8b4804               mov ecx, dword ptr [eax + 4]
// 00545666  6a00                 push 0
// 00545668  6a00                 push 0
// 0054566a  03ce                 add ecx, esi
// 0054566c  ff152ce57700         call dword ptr [0x77e52c]
// 00545672  6a00                 push 0
// 00545674  6a00                 push 0
// 00545676  8bce                 mov ecx, esi
// 00545678  ff1530e57700         call dword ptr [0x77e530]
// 0054567e  8bff                 mov edi, edi
// 00545680  6800040000           push 0x400
// 00545685  8d4c240c             lea ecx, [esp + 0xc]
// 00545689  51                   push ecx
// 0054568a  8bce                 mov ecx, esi
// 0054568c  ff1534e57700         call dword ptr [0x77e534]
// 00545692  8b4604               mov eax, dword ptr [esi + 4]
// 00545695  8b17                 mov edx, dword ptr [edi]
// 00545697  8b12                 mov edx, dword ptr [edx]
// 00545699  50                   push eax
// 0054569a  8d4c240c             lea ecx, [esp + 0xc]
// 0054569e  51                   push ecx
// 0054569f  8bcf                 mov ecx, edi
// 005456a1  ffd2                 call edx
// 005456a3  837e0400             cmp dword ptr [esi + 4], 0
// 005456a7  7fd7                 jg 0x545680
// 005456a9  5f                   pop edi
// 005456aa  5e                   pop esi
// 005456ab  81c400040000         add esp, 0x400
// 005456b1  c20400               ret 4

struct MD5HasherImpl {
    void addData(void* stream);
};

void MD5HasherImpl::addData(void* stream) {
    char buffer[1024];
    char* s = (char*)stream;
    int* vtable = *(int**)s;
    void (__stdcall *clearFn)(int, int);
    void (__stdcall *seekgFn)(int, int, int);
    void (__stdcall *readFn)(int, char*, int);
    clearFn = *(void (__stdcall**)(int, int))0x77e52c;
    seekgFn = *(void (__stdcall**)(int, int, int))0x77e530;
    readFn = *(void (__stdcall**)(int, char*, int))0x77e534;
    clearFn((int)(s + *(int*)((char*)vtable + 4)), 0);
    seekgFn((int)s, 0, 0);
    do {
        readFn((int)s, buffer, 1024);
        int n = *(int*)(s + 4);
        void (__stdcall *addFn)(void*, char*, int);
        addFn = *(void (__stdcall**)(void*, char*, int))*(int*)(*(int*)this);
        addFn(this, buffer, n);
    } while (*(int*)(s + 4) > 0);
}
