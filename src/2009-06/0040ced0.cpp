// roc 2009-06 0040ced0  unit: CIDEBrowserView  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040ced0
//
// 0040ced0  56                   push esi
// 0040ced1  57                   push edi
// 0040ced2  8b3d90ee8900         mov edi, dword ptr [0x89ee90]
// 0040ced8  6a00                 push 0
// 0040ceda  8bf1                 mov esi, ecx
// 0040cedc  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0040cee2  8b4020               mov eax, dword ptr [eax + 0x20]
// 0040cee5  6a00                 push 0
// 0040cee7  688b010000           push 0x18b
// 0040ceec  50                   push eax
// 0040ceed  ffd7                 call edi
// 0040ceef  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040cef3  3bc8                 cmp ecx, eax
// 0040cef5  7d14                 jge 0x40cf0b
// 0040cef7  6a00                 push 0
// 0040cef9  51                   push ecx
// 0040cefa  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0040cf00  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0040cf03  6882010000           push 0x182
// 0040cf08  52                   push edx
// 0040cf09  ffd7                 call edi
// 0040cf0b  5f                   pop edi
// 0040cf0c  5e                   pop esi
// 0040cf0d  c20400               ret 4
// copied from an identical function in another client (function ?removeItem@S@@QAEXH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 88% by colin
extern "C" long (__stdcall *SendMessageA)(void *, unsigned int, unsigned int, long);
extern "C" void (__cdecl *free)(void *);

struct Control {
    char padding[0x20];
    void *window;
};

struct S {
    char padding[0x178];
    Control *control;
    void removeItem(int index);
};

void S::removeItem(int index)
{
    long (__stdcall *send)(void *, unsigned int, unsigned int, long) = SendMessageA;
    void *w = control->window;
    if (index < send(w, 0x18B, 0, 0))
        send(control->window, 0x182, index, 0);
}

struct Buffer {
    void *data;
    int count;
    void release();
};

void Buffer::release()
{
    if (count > 0)
        free(data);
}