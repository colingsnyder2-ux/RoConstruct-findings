// roc 2009-12 0040cda0  unit: CIDEBrowserView  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040cda0
//
// 0040cda0  56                   push esi
// 0040cda1  57                   push edi
// 0040cda2  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 0040cda8  6a00                 push 0
// 0040cdaa  8bf1                 mov esi, ecx
// 0040cdac  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0040cdb2  8b4020               mov eax, dword ptr [eax + 0x20]
// 0040cdb5  6a00                 push 0
// 0040cdb7  688b010000           push 0x18b
// 0040cdbc  50                   push eax
// 0040cdbd  ffd7                 call edi
// 0040cdbf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040cdc3  3bc8                 cmp ecx, eax
// 0040cdc5  7d14                 jge 0x40cddb
// 0040cdc7  6a00                 push 0
// 0040cdc9  51                   push ecx
// 0040cdca  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0040cdd0  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0040cdd3  6882010000           push 0x182
// 0040cdd8  52                   push edx
// 0040cdd9  ffd7                 call edi
// 0040cddb  5f                   pop edi
// 0040cddc  5e                   pop esi
// 0040cddd  c20400               ret 4
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