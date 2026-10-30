// roc 2012-06 00415320  unit: UString_sink::?$stream_buffer  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00415320
//
// 00415320  56                   push esi
// 00415321  57                   push edi
// 00415322  8b3d043cb200         mov edi, dword ptr [0xb23c04]
// 00415328  6a00                 push 0
// 0041532a  8bf1                 mov esi, ecx
// 0041532c  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00415332  8b4020               mov eax, dword ptr [eax + 0x20]
// 00415335  6a00                 push 0
// 00415337  688b010000           push 0x18b
// 0041533c  50                   push eax
// 0041533d  ffd7                 call edi
// 0041533f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00415343  3bc8                 cmp ecx, eax
// 00415345  7d14                 jge 0x41535b
// 00415347  6a00                 push 0
// 00415349  51                   push ecx
// 0041534a  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00415350  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00415353  6882010000           push 0x182
// 00415358  52                   push edx
// 00415359  ffd7                 call edi
// 0041535b  5f                   pop edi
// 0041535c  5e                   pop esi
// 0041535d  c20400               ret 4
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