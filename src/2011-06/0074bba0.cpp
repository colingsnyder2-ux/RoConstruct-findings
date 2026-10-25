// from server: 37% by atomic.potato
// roc 2011-06 0074bba0  unit: RBX::Kernel  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074bba0
//
// 0074bba0  53                   push ebx
// 0074bba1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0074bba5  55                   push ebp
// 0074bba6  56                   push esi
// 0074bba7  8be9                 mov ebp, ecx
// 0074bba9  57                   push edi
// 0074bbaa  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 0074bbad  33f6                 xor esi, esi
// 0074bbaf  397704               cmp dword ptr [edi + 4], esi
// 0074bbb2  7e11                 jle 0x74bbc5
// 0074bbb4  8b07                 mov eax, dword ptr [edi]
// 0074bbb6  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0074bbb9  53                   push ebx
// 0074bbba  e8c1610500           call 0x7a1d80
// 0074bbbf  46                   inc esi
// 0074bbc0  3b7704               cmp esi, dword ptr [edi + 4]
// 0074bbc3  7cef                 jl 0x74bbb4
// 0074bbc5  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0074bbc8  8d751c               lea esi, [ebp + 0x1c]
// 0074bbcb  33d2                 xor edx, edx
// 0074bbcd  3bc2                 cmp eax, edx
// 0074bbcf  7420                 je 0x74bbf1
// 0074bbd1  8b4e08               mov ecx, dword ptr [esi + 8]
// 0074bbd4  3bca                 cmp ecx, edx
// 0074bbd6  895604               mov dword ptr [esi + 4], edx
// 0074bbd9  7d16                 jge 0x74bbf1
// 0074bbdb  50                   push eax
// 0074bbdc  8bce                 mov ecx, esi
// 0074bbde  7505                 jne 0x74bbe5
// 0074bbe0  895608               mov dword ptr [esi + 8], edx
// 0074bbe3  eb07                 jmp 0x74bbec
// 0074bbe5  c746080a000000       mov dword ptr [esi + 8], 0xa
// 0074bbec  e83f1fe0ff           call 0x54db30
// 0074bbf1  84db                 test bl, bl
// 0074bbf3  7477                 je 0x74bc6c
// 0074bbf5  33db                 xor ebx, ebx
// 0074bbf7  395f34               cmp dword ptr [edi + 0x34], ebx
// 0074bbfa  7e70                 jle 0x74bc6c
// 0074bbfc  8d642400             lea esp, [esp]
// 0074bc00  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 0074bc03  8b0c99               mov ecx, dword ptr [ecx + ebx*4]
// 0074bc06  8b11                 mov edx, dword ptr [ecx]
// 0074bc08  8b4204               mov eax, dword ptr [edx + 4]
// 0074bc0b  ffd0                 call eax
// 0074bc0d  84c0                 test al, al
// 0074bc0f  7555                 jne 0x74bc66
// 0074bc11  8b4604               mov eax, dword ptr [esi + 4]
// 0074bc14  3b4608               cmp eax, dword ptr [esi + 8]
// 0074bc17  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 0074bc1a  8b2c99               mov ebp, dword ptr [ecx + ebx*4]
// 0074bc1d  7d10                 jge 0x74bc2f
// 0074bc1f  8b16                 mov edx, dword ptr [esi]
// 0074bc21  8d0482               lea eax, [edx + eax*4]
// 0074bc24  85c0                 test eax, eax
// 0074bc26  7402                 je 0x74bc2a
// 0074bc28  8928                 mov dword ptr [eax], ebp
// 0074bc2a  ff4604               inc dword ptr [esi + 4]
// 0074bc2d  eb37                 jmp 0x74bc66
// 0074bc2f  8b0e                 mov ecx, dword ptr [esi]
// 0074bc31  8d542414             lea edx, [esp + 0x14]
// 0074bc35  3bd1                 cmp edx, ecx
// 0074bc37  7219                 jb 0x74bc52
// 0074bc39  8d0c81               lea ecx, [ecx + eax*4]
// 0074bc3c  3bd1                 cmp edx, ecx
// 0074bc3e  7312                 jae 0x74bc52
// 0074bc40  8d442414             lea eax, [esp + 0x14]
// 0074bc44  50                   push eax
// 0074bc45  8bce                 mov ecx, esi
// 0074bc47  896c2418             mov dword ptr [esp + 0x18], ebp
// 0074bc4b  e8b058dcff           call 0x511500
// 0074bc50  eb14                 jmp 0x74bc66
// 0074bc52  6a00                 push 0
// 0074bc54  40                   inc eax
// 0074bc55  50                   push eax
// 0074bc56  8bce                 mov ecx, esi
// 0074bc58  e8d30f0000           call 0x74cc30
// 0074bc5d  8b4e04               mov ecx, dword ptr [esi + 4]
// 0074bc60  8b16                 mov edx, dword ptr [esi]
// 0074bc62  896c8afc             mov dword ptr [edx + ecx*4 - 4], ebp
// 0074bc66  43                   inc ebx
// 0074bc67  3b5f34               cmp ebx, dword ptr [edi + 0x34]
// 0074bc6a  7c94                 jl 0x74bc00
// 0074bc6c  5f                   pop edi
// 0074bc6d  5e                   pop esi
// 0074bc6e  5d                   pop ebp
// 0074bc6f  5b                   pop ebx
// 0074bc70  c20400               ret 4

struct Vec {
    int* begin;
    int  size;
    int  cap;
    void push_back(int* v);
    void insert(int* pos, int* v);
    void reserve(int n);
};

struct Obj {
    virtual bool check();
};

struct List {
    int   count;
    int   pad0;
    int   pad1;
    int   pad2;
    int   pad3;
    int   pad4;
    int   pad5;
    int   pad6;
    int   pad7;
    int   pad8;
    int   pad9;
    int   pad10;
    int   pad11;
    int   pad12;
    int   count2;
    Obj** items;
};

struct Kernel {
    char  pad0[0x18];
    List* list;
    char  pad1[4];
    Vec   vec;
    void  method(int* arg);
};

extern "C" void __stdcall sub_7a1d80(int* p, int* v);
extern "C" void __stdcall sub_54db30(Vec* v, int n);

void Vec::push_back(int* v) {
    if (size < cap) {
        int* p = begin + size;
        if (p) *p = (int)v;
        size++;
    } else {
        insert(begin + size, v);
    }
}

void Vec::insert(int* pos, int* v) {
    int* b = begin;
    if (pos >= b && pos < b + size) {
        reserve(size + 1);
        begin[size - 1] = (int)v;
    } else {
        reserve(size + 1);
        begin[size - 1] = (int)v;
    }
}

void Vec::reserve(int n) {
    if (n > cap) {
        int old = cap;
        cap = n;
        sub_54db30(this, old);
    }
}

void Kernel::method(int* arg) {
    List* l = list;
    for (int i = 0; i < l->count; i++) {
        sub_7a1d80((int*)l->items[i], arg);
    }
    if (vec.cap != 0) {
        if (vec.size < 0) {
            vec.size = 0;
            if (vec.cap == 0) vec.cap = 0;
            else vec.cap = 10;
            sub_54db30(&vec, vec.cap);
        }
    }
    if (*(char*)&arg) {
        for (int j = 0; j < l->count2; j++) {
            Obj* o = l->items[j];
            if (!o->check()) {
                vec.push_back((int*)o);
            }
        }
    }
}
