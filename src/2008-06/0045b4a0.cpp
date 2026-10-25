// from server: 79% by colin
// roc 2008-06 0045b4a0  unit: CRobloxWnd  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045b4a0
//
// 0045b4a0  53                   push ebx
// 0045b4a1  56                   push esi
// 0045b4a2  57                   push edi
// 0045b4a3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0045b4a7  8bf1                 mov esi, ecx
// 0045b4a9  81ff00020000         cmp edi, 0x200
// 0045b4af  7752                 ja 0x45b503
// 0045b4b1  746e                 je 0x45b521
// 0045b4b3  81ff02010000         cmp edi, 0x102
// 0045b4b9  7734                 ja 0x45b4ef
// 0045b4bb  81ff00010000         cmp edi, 0x100
// 0045b4c1  733c                 jae 0x45b4ff
// 0045b4c3  83ff07               cmp edi, 7
// 0045b4c6  720a                 jb 0x45b4d2
// 0045b4c8  83ff08               cmp edi, 8
// 0045b4cb  7632                 jbe 0x45b4ff
// 0045b4cd  83ff21               cmp edi, 0x21
// 0045b4d0  742d                 je 0x45b4ff
// 0045b4d2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0045b4d6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0045b4da  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0045b4de  52                   push edx
// 0045b4df  50                   push eax
// 0045b4e0  51                   push ecx
// 0045b4e1  57                   push edi
// 0045b4e2  8bce                 mov ecx, esi
// 0045b4e4  e817532400           call 0x6a0800
// 0045b4e9  5f                   pop edi
// 0045b4ea  5e                   pop esi
// 0045b4eb  5b                   pop ebx
// 0045b4ec  c21000               ret 0x10
// 0045b4ef  81ff04010000         cmp edi, 0x104
// 0045b4f5  72db                 jb 0x45b4d2
// 0045b4f7  81ff06010000         cmp edi, 0x106
// 0045b4fd  77d3                 ja 0x45b4d2
// 0045b4ff  32db                 xor bl, bl
// 0045b501  eb2a                 jmp 0x45b52d
// 0045b503  8d87fffdffff         lea eax, [edi - 0x201]
// 0045b509  83f809               cmp eax, 9
// 0045b50c  77c4                 ja 0x45b4d2
// 0045b50e  0fb680c4b54500       movzx eax, byte ptr [eax + 0x45b5c4]
// 0045b515  ff2485b0b54500       jmp dword ptr [eax*4 + 0x45b5b0]
// 0045b51c  e807552400           call 0x6a0a28
// 0045b521  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0045b525  b301                 mov bl, 1
// 0045b527  c70100000000         mov dword ptr [ecx], 0
// 0045b52d  837e7000             cmp dword ptr [esi + 0x70], 0
// 0045b531  744b                 je 0x45b57e
// 0045b533  55                   push ebp
// 0045b534  8baea4000000         mov ebp, dword ptr [esi + 0xa4]
// 0045b53a  392df4ef9600         cmp dword ptr [0x96eff4], ebp
// 0045b540  7413                 je 0x45b555
// 0045b542  8b5500               mov edx, dword ptr [ebp]
// 0045b545  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 0045b54b  8bcd                 mov ecx, ebp
// 0045b54d  ffd0                 call eax
// 0045b54f  892df4ef9600         mov dword ptr [0x96eff4], ebp
// 0045b555  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0045b55b  5d                   pop ebp
// 0045b55c  85c9                 test ecx, ecx
// 0045b55e  7410                 je 0x45b570
// 0045b560  8b542418             mov edx, dword ptr [esp + 0x18]
// 0045b564  8b442414             mov eax, dword ptr [esp + 0x14]
// 0045b568  52                   push edx
// 0045b569  50                   push eax
// 0045b56a  57                   push edi
// 0045b56b  e820d60000           call 0x468b90
// 0045b570  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0045b573  6a01                 push 1
// 0045b575  6a00                 push 0
// 0045b577  51                   push ecx
// 0045b578  ff15182e8000         call dword ptr [0x802e18]
// 0045b57e  84db                 test bl, bl
// 0045b580  0f844cffffff         je 0x45b4d2
// 0045b586  5f                   pop edi
// 0045b587  5e                   pop esi
// 0045b588  b801000000           mov eax, 1
// 0045b58d  5b                   pop ebx
// 0045b58e  c21000               ret 0x10
// 0045b591  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0045b595  c70200000000         mov dword ptr [edx], 0
// 0045b59b  32db                 xor bl, bl
// 0045b59d  eb8e                 jmp 0x45b52d
// 0045b59f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0045b5a3  c70000000000         mov dword ptr [eax], 0
// 0045b5a9  32db                 xor bl, bl
// 0045b5ab  eb80                 jmp 0x45b52d
// 0045b5ad  8d4900               lea ecx, [ecx]
// 0045b5b0  1cb5                 sbb al, 0xb5
// 0045b5b2  45                   inc ebp
// 0045b5b3  0091b545009f         add byte ptr [ecx - 0x60ffba4b], dl
// 0045b5b9  b545                 mov ch, 0x45
// 0045b5bb  0021                 add byte ptr [ecx], ah
// 0045b5bd  b545                 mov ch, 0x45
// 0045b5bf  00d2                 add dl, dl
// 0045b5c1  b445                 mov ah, 0x45
// 0045b5c3  0000                 add byte ptr [eax], al
// 0045b5c5  0102                 add dword ptr [edx], eax
// 0045b5c7  0001                 add byte ptr [ecx], al
// 0045b5c9  020404               add al, byte ptr [esp + eax]
// 0045b5cc  0403                 add al, 3

// from server: 74% by king_originala
// roc 2008-06 0045b4a0  unit: CRobloxWnd  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045b4a0
//
// 0045b4a0  53                   push ebx
// 0045b4a1  56                   push esi
// 0045b4a2  57                   push edi
// 0045b4a3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0045b4a7  8bf1                 mov esi, ecx
// 0045b4a9  81ff00020000         cmp edi, 0x200
// 0045b4af  7752                 ja 0x45b503
// 0045b4b1  746e                 je 0x45b521
// 0045b4b3  81ff02010000         cmp edi, 0x102
// 0045b4b9  7734                 ja 0x45b4ef
// 0045b4bb  81ff00010000         cmp edi, 0x100
// 0045b4c1  733c                 jae 0x45b4ff
// 0045b4c3  83ff07               cmp edi, 7
// 0045b4c6  720a                 jb 0x45b4d2
// 0045b4c8  83ff08               cmp edi, 8
// 0045b4cb  7632                 jbe 0x45b4ff
// 0045b4cd  83ff21               cmp edi, 0x21
// 0045b4d0  742d                 je 0x45b4ff
// 0045b4d2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0045b4d6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0045b4da  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0045b4de  52                   push edx
// 0045b4df  50                   push eax
// 0045b4e0  51                   push ecx
// 0045b4e1  57                   push edi
// 0045b4e2  8bce                 mov ecx, esi
// 0045b4e4  e817532400           call 0x6a0800
// 0045b4e9  5f                   pop edi
// 0045b4ea  5e                   pop esi
// 0045b4eb  5b                   pop ebx
// 0045b4ec  c21000               ret 0x10
// 0045b4ef  81ff04010000         cmp edi, 0x104
// 0045b4f5  72db                 jb 0x45b4d2
// 0045b4f7  81ff06010000         cmp edi, 0x106
// 0045b4fd  77d3                 ja 0x45b4d2
// 0045b4ff  32db                 xor bl, bl
// 0045b501  eb2a                 jmp 0x45b52d
// 0045b503  8d87fffdffff         lea eax, [edi - 0x201]
// 0045b509  83f809               cmp eax, 9
// 0045b50c  77c4                 ja 0x45b4d2
// 0045b50e  0fb680c4b54500       movzx eax, byte ptr [eax + 0x45b5c4]
// 0045b515  ff2485b0b54500       jmp dword ptr [eax*4 + 0x45b5b0]
// 0045b51c  e807552400           call 0x6a0a28
// 0045b521  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0045b525  b301                 mov bl, 1
// 0045b527  c70100000000         mov dword ptr [ecx], 0
// 0045b52d  837e7000             cmp dword ptr [esi + 0x70], 0
// 0045b531  744b                 je 0x45b57e
// 0045b533  55                   push ebp
// 0045b534  8baea4000000         mov ebp, dword ptr [esi + 0xa4]
// 0045b53a  392df4ef9600         cmp dword ptr [0x96eff4], ebp
// 0045b540  7413                 je 0x45b555
// 0045b542  8b5500               mov edx, dword ptr [ebp]
// 0045b545  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 0045b54b  8bcd                 mov ecx, ebp
// 0045b54d  ffd0                 call eax
// 0045b54f  892df4ef9600         mov dword ptr [0x96eff4], ebp
// 0045b555  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0045b55b  5d                   pop ebp
// 0045b55c  85c9                 test ecx, ecx
// 0045b55e  7410                 je 0x45b570
// 0045b560  8b542418             mov edx, dword ptr [esp + 0x18]
// 0045b564  8b442414             mov eax, dword ptr [esp + 0x14]
// 0045b568  52                   push edx
// 0045b569  50                   push eax
// 0045b56a  57                   push edi
// 0045b56b  e820d60000           call 0x468b90
// 0045b570  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0045b573  6a01                 push 1
// 0045b575  6a00                 push 0
// 0045b577  51                   push ecx
// 0045b578  ff15182e8000         call dword ptr [0x802e18]
// 0045b57e  84db                 test bl, bl
// 0045b580  0f844cffffff         je 0x45b4d2
// 0045b586  5f                   pop edi
// 0045b587  5e                   pop esi
// 0045b588  b801000000           mov eax, 1
// 0045b58d  5b                   pop ebx
// 0045b58e  c21000               ret 0x10
// 0045b591  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0045b595  c70200000000         mov dword ptr [edx], 0
// 0045b59b  32db                 xor bl, bl
// 0045b59d  eb8e                 jmp 0x45b52d
// 0045b59f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0045b5a3  c70000000000         mov dword ptr [eax], 0
// 0045b5a9  32db                 xor bl, bl
// 0045b5ab  eb80                 jmp 0x45b52d
// 0045b5ad  8d4900               lea ecx, [ecx]
// 0045b5b0  1cb5                 sbb al, 0xb5
// 0045b5b2  45                   inc ebp
// 0045b5b3  0091b545009f         add byte ptr [ecx - 0x60ffba4b], dl
// 0045b5b9  b545                 mov ch, 0x45
// 0045b5bb  0021                 add byte ptr [ecx], ah
// 0045b5bd  b545                 mov ch, 0x45
// 0045b5bf  00d2                 add dl, dl
// 0045b5c1  b445                 mov ah, 0x45
// 0045b5c3  0000                 add byte ptr [eax], al
// 0045b5c5  0102                 add dword ptr [edx], eax
// 0045b5c7  0001                 add byte ptr [ecx], al
// 0045b5c9  020404               add al, byte ptr [esp + eax]
// 0045b5cc  0403                 add al, 3
#include <intrin.h>

extern "C" int (__stdcall *InvalidateRect)(void *, const void *, int);

struct Context {
    void **vtable;
};

extern Context *currentContext;

struct Handler {
    void process(unsigned int, unsigned int, long);
};

struct CRobloxWnd {
    char reserved0[0x20];
    void *window;
    char reserved1[0x4c];
    int enabled;
    char reserved2[0x10];
    Handler *handler;
    char reserved3[0x1c];
    Context *context;

    int dispatch(unsigned int, unsigned int, long, long *);
    int baseDispatch(unsigned int, unsigned int, long, long *);
    void prepare();
};

int CRobloxWnd::dispatch(unsigned int message, unsigned int wParam,
                        long lParam, long *result)
{
    bool handled;

    switch (message) {
    case 7:
    case 8:
    case 0x21:
    case 0x100:
    case 0x101:
    case 0x102:
    case 0x104:
    case 0x105:
    case 0x106:
        handled = false;
        _ReadWriteBarrier();
        goto processMessage;

    case 0x201:
    case 0x204:
        prepare();
    case 0x200:
    case 0x20a:
        handled = true;
        *result = 0;
        goto processMessage;

    case 0x202:
    case 0x205:
        *result = 0;
        handled = false;
        goto processMessage;

    case 0x203:
    case 0x206:
        *result = 0;
        handled = false;
        goto processMessage;

    default:
        goto defaultMessage;
    }

processMessage:
    if (enabled) {
        Context *p = context;
        if (currentContext != p) {
            typedef void (__thiscall *Activate)(Context *);
            ((Activate)p->vtable[38])(p);
            currentContext = p;
        }

        if (handler)
            handler->process(message, wParam, lParam);

        InvalidateRect(window, 0, 1);
    }

    if (handled)
        return 1;

defaultMessage:
    return baseDispatch(message, wParam, lParam, result);
}
