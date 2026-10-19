// from server: 99% by colin
// from server: 98% by colin
// roc 2008-06 0045e7a0  unit: CRobloxWnd  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045e7a0
//
// 0045e7a0  64a100000000         mov eax, dword ptr fs:[0]
// 0045e7a6  6aff                 push -1
// 0045e7a8  68382f7c00           push 0x7c2f38
// 0045e7ad  50                   push eax
// 0045e7ae  64892500000000       mov dword ptr fs:[0], esp
// 0045e7b5  83ec68               sub esp, 0x68
// 0045e7b8  803d64df960000       cmp byte ptr [0x96df64], 0
// 0045e7bf  55                   push ebp
// 0045e7c0  56                   push esi
// 0045e7c1  57                   push edi
// 0045e7c2  8bf1                 mov esi, ecx
// 0045e7c4  0f8516010000         jne 0x45e8e0
// 0045e7ca  53                   push ebx
// 0045e7cb  56                   push esi
// 0045e7cc  8d4c2428             lea ecx, [esp + 0x28]
// 0045e7d0  c644241700           mov byte ptr [esp + 0x17], 0
// 0045e7d5  e86a272400           call 0x6a0f44
// 0045e7da  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0045e7de  8b442440             mov eax, dword ptr [esp + 0x40]
// 0045e7e2  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0045e7e6  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0045e7ea  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 0045e7f5  8bd8                 mov ebx, eax
// 0045e7f7  894c2418             mov dword ptr [esp + 0x18], ecx
// 0045e7fb  85ff                 test edi, edi
// 0045e7fd  750c                 jne 0x45e80b
// 0045e7ff  85c0                 test eax, eax
// 0045e801  7508                 jne 0x45e80b
// 0045e803  85c9                 test ecx, ecx
// 0045e805  7504                 jne 0x45e80b
// 0045e807  85ed                 test ebp, ebp
// 0045e809  7455                 je 0x45e860
// 0045e80b  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0045e811  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0045e814  8b11                 mov edx, dword ptr [ecx]
// 0045e816  8b420c               mov eax, dword ptr [edx + 0xc]
// 0045e819  ffd0                 call eax
// 0045e81b  2bfb                 sub edi, ebx
// 0045e81d  47                   inc edi
// 0045e81e  3bf8                 cmp edi, eax
// 0045e820  7c19                 jl 0x45e83b
// 0045e822  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0045e828  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0045e82b  8b11                 mov edx, dword ptr [ecx]
// 0045e82d  8b4210               mov eax, dword ptr [edx + 0x10]
// 0045e830  ffd0                 call eax
// 0045e832  2b6c2418             sub ebp, dword ptr [esp + 0x18]
// 0045e836  45                   inc ebp
// 0045e837  3be8                 cmp ebp, eax
// 0045e839  7d25                 jge 0x45e860
// 0045e83b  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0045e841  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0045e844  8b11                 mov edx, dword ptr [ecx]
// 0045e846  8b420c               mov eax, dword ptr [edx + 0xc]
// 0045e849  ffd0                 call eax
// 0045e84b  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0045e851  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0045e854  8b11                 mov edx, dword ptr [ecx]
// 0045e856  8b4210               mov eax, dword ptr [edx + 0x10]
// 0045e859  ffd0                 call eax
// 0045e85b  c644241301           mov byte ptr [esp + 0x13], 1
// 0045e860  8d4c2424             lea ecx, [esp + 0x24]
// 0045e864  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 0045e86f  e8ca262400           call 0x6a0f3e
// 0045e874  807c241300           cmp byte ptr [esp + 0x13], 0
// 0045e879  5b                   pop ebx
// 0045e87a  746b                 je 0x45e8e7
// 0045e87c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0045e87f  8b2df82d8000         mov ebp, dword ptr [0x802df8]
// 0045e885  8bfe                 mov edi, esi
// 0045e887  83c620               add esi, 0x20
// 0045e88a  51                   push ecx
// 0045e88b  ffd5                 call ebp
// 0045e88d  50                   push eax
// 0045e88e  e84b232400           call 0x6a0bde
// 0045e893  85c0                 test eax, eax
// 0045e895  7420                 je 0x45e8b7
// 0045e897  8b16                 mov edx, dword ptr [esi]
// 0045e899  52                   push edx
// 0045e89a  ffd5                 call ebp
// 0045e89c  50                   push eax
// 0045e89d  e83c232400           call 0x6a0bde
// 0045e8a2  8bf8                 mov edi, eax
// 0045e8a4  8b4720               mov eax, dword ptr [edi + 0x20]
// 0045e8a7  8d7720               lea esi, [edi + 0x20]
// 0045e8aa  50                   push eax
// 0045e8ab  ffd5                 call ebp
// 0045e8ad  50                   push eax
// 0045e8ae  e82b232400           call 0x6a0bde
// 0045e8b3  85c0                 test eax, eax
// 0045e8b5  75e0                 jne 0x45e897
// 0045e8b7  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0045e8ba  6a00                 push 0
// 0045e8bc  6a00                 push 0
// 0045e8be  51                   push ecx
// 0045e8bf  ff15242d8000         call dword ptr [0x802d24]
// 0045e8c5  5f                   pop edi
// 0045e8c6  5e                   pop esi
// 0045e8c7  c60564df960001       mov byte ptr [0x96df64], 1
// 0045e8ce  32c0                 xor al, al
// 0045e8d0  5d                   pop ebp
// 0045e8d1  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0045e8d5  64890d00000000       mov dword ptr fs:[0], ecx
// 0045e8dc  83c474               add esp, 0x74
// 0045e8df  c3                   ret 
// 0045e8e0  c60564df960000       mov byte ptr [0x96df64], 0
// 0045e8e7  6a01                 push 1
// 0045e8e9  8bce                 mov ecx, esi
// 0045e8eb  e8d0fdffff           call 0x45e6c0
// 0045e8f0  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0045e8f4  5f                   pop edi
// 0045e8f5  5e                   pop esi
// 0045e8f6  b001                 mov al, 1
// 0045e8f8  5d                   pop ebp
// 0045e8f9  64890d00000000       mov dword ptr fs:[0], ecx
// 0045e900  83c474               add esp, 0x74
// 0045e903  c3                   ret 

extern "C" {
    extern void* (__stdcall *GetParent)(void*);
    extern int (__stdcall *InvalidateRgn)(void*, void*, int);
}

extern unsigned char toggled;

struct View {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual int width();
    virtual int height();
};

struct Holder {
    unsigned char reserved[12];
    View* view;
};

struct S {
    unsigned char reserved0[0x20];
    void* window;
    unsigned char reserved1[0x94];
    Holder* holder;

    void update(int);
    bool f();
};

S* __stdcall fromHandle(void*);

struct Bounds {
    unsigned char reserved0[0x1c];
    int left;
    int top;
    int right;
    int bottom;
    unsigned char reserved1[0x28];

    Bounds(S*);
    ~Bounds();
};

bool S::f()
{
    if (!toggled) {
        bool tooSmall = false;
        {
            struct Frame { unsigned char pad[12]; Bounds b; Frame(S* s) : b(s) {} } frame(this);
            Bounds& bounds = frame.b;
            int right = bounds.right;
            int left = bounds.left;
            int top = bounds.top;
            int bottom = bounds.bottom;

            if (right || left || top || bottom) {
                if (right - left + 1 < holder->view->width() ||
                    bottom - top + 1 < holder->view->height()) {
                    holder->view->width();
                    holder->view->height();
                    tooSmall = true;
                }
            }
        }

        if (tooSmall) {
            void* (__stdcall *parent)(void*) = GetParent;
            S* wnd = this;
            while (fromHandle(parent(wnd->window))) {
                wnd = fromHandle(parent(wnd->window));
            }
            InvalidateRgn(wnd->window, 0, 0);
            toggled = 1;
            return false;
        }
    } else {
        toggled = 0;
    }

    update(1);
    return true;
}
