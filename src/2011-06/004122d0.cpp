// roc 2011-06 004122d0  unit: UString_sink::?$stream_buffer  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004122d0
//
// 004122d0  56                   push esi
// 004122d1  57                   push edi
// 004122d2  8b3dc019a400         mov edi, dword ptr [0xa419c0]
// 004122d8  6a00                 push 0
// 004122da  8bf1                 mov esi, ecx
// 004122dc  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 004122e2  8b4020               mov eax, dword ptr [eax + 0x20]
// 004122e5  6a00                 push 0
// 004122e7  688b010000           push 0x18b
// 004122ec  50                   push eax
// 004122ed  ffd7                 call edi
// 004122ef  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004122f3  3bc8                 cmp ecx, eax
// 004122f5  7d14                 jge 0x41230b
// 004122f7  6a00                 push 0
// 004122f9  51                   push ecx
// 004122fa  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00412300  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00412303  6882010000           push 0x182
// 00412308  52                   push edx
// 00412309  ffd7                 call edi
// 0041230b  5f                   pop edi
// 0041230c  5e                   pop esi
// 0041230d  c20400               ret 4
// copied from an identical function in another client (function ?removeItem@S@ns_ROCX00000a@@QAEXH@Z)

namespace ns_ROCX00000a {
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
}
