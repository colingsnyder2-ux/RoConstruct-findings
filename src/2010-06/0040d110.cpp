// roc 2010-06 0040d110  unit: CIDEBrowserView  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040d110
//
// 0040d110  56                   push esi
// 0040d111  57                   push edi
// 0040d112  8b3d54ba9e00         mov edi, dword ptr [0x9eba54]
// 0040d118  6a00                 push 0
// 0040d11a  8bf1                 mov esi, ecx
// 0040d11c  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0040d122  8b4020               mov eax, dword ptr [eax + 0x20]
// 0040d125  6a00                 push 0
// 0040d127  688b010000           push 0x18b
// 0040d12c  50                   push eax
// 0040d12d  ffd7                 call edi
// 0040d12f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040d133  3bc8                 cmp ecx, eax
// 0040d135  7d14                 jge 0x40d14b
// 0040d137  6a00                 push 0
// 0040d139  51                   push ecx
// 0040d13a  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0040d140  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0040d143  6882010000           push 0x182
// 0040d148  52                   push edx
// 0040d149  ffd7                 call edi
// 0040d14b  5f                   pop edi
// 0040d14c  5e                   pop esi
// 0040d14d  c20400               ret 4
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