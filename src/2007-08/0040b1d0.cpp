// from server: 67% by colin
// roc 2007-08 0040b1d0  unit: CNullDoc  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b1d0
//
// 0040b1d0  51                   push ecx
// 0040b1d1  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 0040b1d7  8b08                 mov ecx, dword ptr [eax]
// 0040b1d9  8d1424               lea edx, [esp]
// 0040b1dc  52                   push edx
// 0040b1dd  50                   push eax
// 0040b1de  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 0040b1e1  ffd0                 call eax
// 0040b1e3  85c0                 test eax, eax
// 0040b1e5  751b                 jne 0x40b202
// 0040b1e7  66833c24ff           cmp word ptr [esp], -1
// 0040b1ec  7514                 jne 0x40b202
// 0040b1ee  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040b1f2  8b11                 mov edx, dword ptr [ecx]
// 0040b1f4  b801000000           mov eax, 1
// 0040b1f9  50                   push eax
// 0040b1fa  8b02                 mov eax, dword ptr [edx]
// 0040b1fc  ffd0                 call eax
// 0040b1fe  59                   pop ecx
// 0040b1ff  c20400               ret 4
// 0040b202  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040b206  8b11                 mov edx, dword ptr [ecx]
// 0040b208  33c0                 xor eax, eax
// 0040b20a  50                   push eax
// 0040b20b  8b02                 mov eax, dword ptr [edx]
// 0040b20d  ffd0                 call eax
// 0040b20f  59                   pop ecx
// 0040b210  c20400               ret 4

struct CNullDoc {
    char pad[0xec];
    int field_ec;
    int method(int);
};

int CNullDoc::method(int arg) {
    int local;
    int* p = (int*)field_ec;
    int* vtbl = (int*)*p;
    typedef int (__stdcall *Fn)(int*, int*);
    Fn fn = (Fn)vtbl[0x7c/4];
    int result = fn(p, &local);
    if (result != 0 || *(short*)&local != -1) {
        int* obj = (int*)((char*)&arg + 4);
        int* v = (int*)*obj;
        typedef int (__stdcall *Fn2)(int*, int);
        Fn2 fn2 = (Fn2)v[0];
        fn2(obj, 0);
        return 0;
    }
    int* obj = (int*)((char*)&arg + 4);
    int* v = (int*)*obj;
    typedef int (__stdcall *Fn2)(int*, int);
    Fn2 fn2 = (Fn2)v[0];
    fn2(obj, 1);
    return 0;
}
