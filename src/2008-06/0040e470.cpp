// from server: 100% by colin
// roc 2008-06 0040e470  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040e470
//
// 0040e470  56                   push esi
// 0040e471  57                   push edi
// 0040e472  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 0040e478  6a00                 push 0
// 0040e47a  8bf1                 mov esi, ecx
// 0040e47c  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0040e482  8b4020               mov eax, dword ptr [eax + 0x20]
// 0040e485  6a00                 push 0
// 0040e487  688b010000           push 0x18b
// 0040e48c  50                   push eax
// 0040e48d  ffd7                 call edi
// 0040e48f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040e493  3bc8                 cmp ecx, eax
// 0040e495  7d14                 jge 0x40e4ab
// 0040e497  6a00                 push 0
// 0040e499  51                   push ecx
// 0040e49a  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0040e4a0  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0040e4a3  6882010000           push 0x182
// 0040e4a8  52                   push edx
// 0040e4a9  ffd7                 call edi
// 0040e4ab  5f                   pop edi
// 0040e4ac  5e                   pop esi
// 0040e4ad  c20400               ret 4

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
