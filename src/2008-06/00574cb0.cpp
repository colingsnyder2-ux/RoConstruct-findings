// from server: 96% by colin
// roc 2008-06 00574cb0  unit: RBX::TopMenuBar  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00574cb0
//
// 00574cb0  83ec08               sub esp, 8
// 00574cb3  53                   push ebx
// 00574cb4  55                   push ebp
// 00574cb5  56                   push esi
// 00574cb6  57                   push edi
// 00574cb7  33ed                 xor ebp, ebp
// 00574cb9  55                   push ebp
// 00574cba  684c679400           push 0x94674c
// 00574cbf  8bf1                 mov esi, ecx
// 00574cc1  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 00574cc7  68d8b89200           push 0x92b8d8
// 00574ccc  8dbe34010000         lea edi, [esi + 0x134]
// 00574cd2  55                   push ebp
// 00574cd3  50                   push eax
// 00574cd4  e8edca1200           call 0x6a17c6
// 00574cd9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00574cdd  8bd8                 mov ebx, eax
// 00574cdf  8b01                 mov eax, dword ptr [ecx]
// 00574ce1  83c414               add esp, 0x14
// 00574ce4  83f803               cmp eax, 3
// 00574ce7  0f8cd1000000         jl 0x574dbe
// 00574ced  83f804               cmp eax, 4
// 00574cf0  7e6c                 jle 0x574d5e
// 00574cf2  83f805               cmp eax, 5
// 00574cf5  0f85c3000000         jne 0x574dbe
// 00574cfb  3bdd                 cmp ebx, ebp
// 00574cfd  7406                 je 0x574d05
// 00574cff  8bab44010000         mov ebp, dword ptr [ebx + 0x144]
// 00574d05  51                   push ecx
// 00574d06  8d442414             lea eax, [esp + 0x14]
// 00574d0a  50                   push eax
// 00574d0b  8d8e30010000         lea ecx, [esi + 0x130]
// 00574d11  e8fafdffff           call 0x574b10
// 00574d16  85db                 test ebx, ebx
// 00574d18  7429                 je 0x574d43
// 00574d1a  8b3f                 mov edi, dword ptr [edi]
// 00574d1c  6a00                 push 0
// 00574d1e  684c679400           push 0x94674c
// 00574d23  68d8b89200           push 0x92b8d8
// 00574d28  6a00                 push 0
// 00574d2a  57                   push edi
// 00574d2b  e896ca1200           call 0x6a17c6
// 00574d30  83c414               add esp, 0x14
// 00574d33  85c0                 test eax, eax
// 00574d35  740c                 je 0x574d43
// 00574d37  3bc3                 cmp eax, ebx
// 00574d39  7408                 je 0x574d43
// 00574d3b  55                   push ebp
// 00574d3c  8bc8                 mov ecx, eax
// 00574d3e  e87de8ffff           call 0x5735c0
// 00574d43  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00574d47  5f                   pop edi
// 00574d48  5e                   pop esi
// 00574d49  5d                   pop ebp
// 00574d4a  c70001000000         mov dword ptr [eax], 1
// 00574d50  c7400400000000       mov dword ptr [eax + 4], 0
// 00574d57  5b                   pop ebx
// 00574d58  83c408               add esp, 8
// 00574d5b  c20800               ret 8
// 00574d5e  51                   push ecx
// 00574d5f  8d4c2414             lea ecx, [esp + 0x14]
// 00574d63  51                   push ecx
// 00574d64  8d8e30010000         lea ecx, [esi + 0x130]
// 00574d6a  e8a1fdffff           call 0x574b10
// 00574d6f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00574d73  3bdd                 cmp ebx, ebp
// 00574d75  7419                 je 0x574d90
// 00574d77  83fb02               cmp ebx, 2
// 00574d7a  752b                 jne 0x574da7
// 00574d7c  8b0f                 mov ecx, dword ptr [edi]
// 00574d7e  3bcd                 cmp ecx, ebp
// 00574d80  7407                 je 0x574d89
// 00574d82  8b11                 mov edx, dword ptr [ecx]
// 00574d84  8b4240               mov eax, dword ptr [edx + 0x40]
// 00574d87  ffd0                 call eax
// 00574d89  8bcf                 mov ecx, edi
// 00574d8b  e8f020eeff           call 0x456e80
// 00574d90  39ae44010000         cmp dword ptr [esi + 0x144], ebp
// 00574d96  740f                 je 0x574da7
// 00574d98  8b16                 mov edx, dword ptr [esi]
// 00574d9a  8b4264               mov eax, dword ptr [edx + 0x64]
// 00574d9d  8bce                 mov ecx, esi
// 00574d9f  89ae44010000         mov dword ptr [esi + 0x144], ebp
// 00574da5  ffd0                 call eax
// 00574da7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00574dab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00574daf  5f                   pop edi
// 00574db0  5e                   pop esi
// 00574db1  5d                   pop ebp
// 00574db2  8918                 mov dword ptr [eax], ebx
// 00574db4  894804               mov dword ptr [eax + 4], ecx
// 00574db7  5b                   pop ebx
// 00574db8  83c408               add esp, 8
// 00574dbb  c20800               ret 8
// 00574dbe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00574dc2  5f                   pop edi
// 00574dc3  5e                   pop esi
// 00574dc4  8928                 mov dword ptr [eax], ebp
// 00574dc6  896804               mov dword ptr [eax + 4], ebp
// 00574dc9  5d                   pop ebp
// 00574dca  5b                   pop ebx
// 00574dcb  83c408               add esp, 8
// 00574dce  c20800               ret 8

// from server: 93% by king_originala
// roc 2008-06 00574cb0  unit: RBX::TopMenuBar  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00574cb0
//
// 00574cb0  83ec08               sub esp, 8
// 00574cb3  53                   push ebx
// 00574cb4  55                   push ebp
// 00574cb5  56                   push esi
// 00574cb6  57                   push edi
// 00574cb7  33ed                 xor ebp, ebp
// 00574cb9  55                   push ebp
// 00574cba  684c679400           push 0x94674c
// 00574cbf  8bf1                 mov esi, ecx
// 00574cc1  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 00574cc7  68d8b89200           push 0x92b8d8
// 00574ccc  8dbe34010000         lea edi, [esi + 0x134]
// 00574cd2  55                   push ebp
// 00574cd3  50                   push eax
// 00574cd4  e8edca1200           call 0x6a17c6
// 00574cd9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00574cdd  8bd8                 mov ebx, eax
// 00574cdf  8b01                 mov eax, dword ptr [ecx]
// 00574ce1  83c414               add esp, 0x14
// 00574ce4  83f803               cmp eax, 3
// 00574ce7  0f8cd1000000         jl 0x574dbe
// 00574ced  83f804               cmp eax, 4
// 00574cf0  7e6c                 jle 0x574d5e
// 00574cf2  83f805               cmp eax, 5
// 00574cf5  0f85c3000000         jne 0x574dbe
// 00574cfb  3bdd                 cmp ebx, ebp
// 00574cfd  7406                 je 0x574d05
// 00574cff  8bab44010000         mov ebp, dword ptr [ebx + 0x144]
// 00574d05  51                   push ecx
// 00574d06  8d442414             lea eax, [esp + 0x14]
// 00574d0a  50                   push eax
// 00574d0b  8d8e30010000         lea ecx, [esi + 0x130]
// 00574d11  e8fafdffff           call 0x574b10
// 00574d16  85db                 test ebx, ebx
// 00574d18  7429                 je 0x574d43
// 00574d1a  8b3f                 mov edi, dword ptr [edi]
// 00574d1c  6a00                 push 0
// 00574d1e  684c679400           push 0x94674c
// 00574d23  68d8b89200           push 0x92b8d8
// 00574d28  6a00                 push 0
// 00574d2a  57                   push edi
// 00574d2b  e896ca1200           call 0x6a17c6
// 00574d30  83c414               add esp, 0x14
// 00574d33  85c0                 test eax, eax
// 00574d35  740c                 je 0x574d43
// 00574d37  3bc3                 cmp eax, ebx
// 00574d39  7408                 je 0x574d43
// 00574d3b  55                   push ebp
// 00574d3c  8bc8                 mov ecx, eax
// 00574d3e  e87de8ffff           call 0x5735c0
// 00574d43  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00574d47  5f                   pop edi
// 00574d48  5e                   pop esi
// 00574d49  5d                   pop ebp
// 00574d4a  c70001000000         mov dword ptr [eax], 1
// 00574d50  c7400400000000       mov dword ptr [eax + 4], 0
// 00574d57  5b                   pop ebx
// 00574d58  83c408               add esp, 8
// 00574d5b  c20800               ret 8
// 00574d5e  51                   push ecx
// 00574d5f  8d4c2414             lea ecx, [esp + 0x14]
// 00574d63  51                   push ecx
// 00574d64  8d8e30010000         lea ecx, [esi + 0x130]
// 00574d6a  e8a1fdffff           call 0x574b10
// 00574d6f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00574d73  3bdd                 cmp ebx, ebp
// 00574d75  7419                 je 0x574d90
// 00574d77  83fb02               cmp ebx, 2
// 00574d7a  752b                 jne 0x574da7
// 00574d7c  8b0f                 mov ecx, dword ptr [edi]
// 00574d7e  3bcd                 cmp ecx, ebp
// 00574d80  7407                 je 0x574d89
// 00574d82  8b11                 mov edx, dword ptr [ecx]
// 00574d84  8b4240               mov eax, dword ptr [edx + 0x40]
// 00574d87  ffd0                 call eax
// 00574d89  8bcf                 mov ecx, edi
// 00574d8b  e8f020eeff           call 0x456e80
// 00574d90  39ae44010000         cmp dword ptr [esi + 0x144], ebp
// 00574d96  740f                 je 0x574da7
// 00574d98  8b16                 mov edx, dword ptr [esi]
// 00574d9a  8b4264               mov eax, dword ptr [edx + 0x64]
// 00574d9d  8bce                 mov ecx, esi
// 00574d9f  89ae44010000         mov dword ptr [esi + 0x144], ebp
// 00574da5  ffd0                 call eax
// 00574da7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00574dab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00574daf  5f                   pop edi
// 00574db0  5e                   pop esi
// 00574db1  5d                   pop ebp
// 00574db2  8918                 mov dword ptr [eax], ebx
// 00574db4  894804               mov dword ptr [eax + 4], ecx
// 00574db7  5b                   pop ebx
// 00574db8  83c408               add esp, 8
// 00574dbb  c20800               ret 8
// 00574dbe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00574dc2  5f                   pop edi
// 00574dc3  5e                   pop esi
// 00574dc4  8928                 mov dword ptr [eax], ebp
// 00574dc6  896804               mov dword ptr [eax + 4], ebp
// 00574dc9  5d                   pop ebp
// 00574dca  5b                   pop ebx
// 00574dcb  83c408               add esp, 8
// 00574dce  c20800               ret 8
#include <intrin.h>

struct Event {
    int kind;
};

struct Result {
    int first;
    int second;

    Result() {}
    Result(int a, int b) : first(a), second(b) {}
};

struct Widget;
struct S;

struct VTable {
    void *slots0[16];
    void (__thiscall *release)(Widget *);
    void *slots1[8];
    void (__thiscall *changed)(S *);
};

struct Widget {
    VTable *vtable;
    char padding[0x140];
    int menuState;

    void setMenuState(int);
};

struct Shared {
    Widget *pointer;
    void *control;

    void reset();
};

struct Handler {
    int data;
    Shared child;

    Result *query(Result *, Event *);
};

extern char sourceType;
extern char destinationType;

extern "C" void *__cdecl runtimeCast(
    void *, long, void *, void *, int);

struct S {
    VTable *vtable;
    char padding[0x12c];
    Handler handler;
    char padding2[8];
    int menuState;

    Result f(Event *);
};

Result S::f(Event *event)
{
    Result result;
    Widget *previous = static_cast<Widget *>(
        runtimeCast(handler.child.pointer, 0,
                    &sourceType, &destinationType, 0));

    switch (event->kind) {
    case 3:
    case 4:
        {
            handler.query(&result, event);
            int first = result.first;
            _ReadWriteBarrier();

            if (first == 0 || first == 2) {
                if (first == 2) {
                    if (handler.child.pointer)
                        handler.child.pointer->vtable->release(
                            handler.child.pointer);
                    handler.child.reset();
                }

                if (menuState != 0) {
                    void (__thiscall *changed)(S *) = vtable->changed;
                    menuState = 0;
                    changed(this);
                }
            }

            return Result(first, result.second);
        }

    case 5:
        {
            int state = previous ? previous->menuState : 0;
            handler.query(&result, event);

            if (previous) {
                Widget *current = static_cast<Widget *>(
                    runtimeCast(handler.child.pointer, 0,
                                &sourceType, &destinationType, 0));

                if (current && current != previous)
                    current->setMenuState(state);
            }

            return Result(1, 0);
        }

    default:
        return Result(0, 0);
    }
}
