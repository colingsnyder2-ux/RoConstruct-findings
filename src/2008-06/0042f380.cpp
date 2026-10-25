// from server: 55% by king_originala
// roc 2008-06 0042f380  unit: CPatchedControlComboBox  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042f380
//
// 0042f380  53                   push ebx
// 0042f381  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0042f385  56                   push esi
// 0042f386  57                   push edi
// 0042f387  68bb800000           push 0x80bb
// 0042f38c  8bcb                 mov ecx, ebx
// 0042f38e  e8cdea2800           call 0x6bde60
// 0042f393  68bb800000           push 0x80bb
// 0042f398  53                   push ebx
// 0042f399  be10000000           mov esi, 0x10
// 0042f39e  bfa00c8100           mov edi, 0x810ca0
// 0042f3a3  e8e8feffff           call 0x42f290
// 0042f3a8  68bb800000           push 0x80bb
// 0042f3ad  53                   push ebx
// 0042f3ae  be20000000           mov esi, 0x20
// 0042f3b3  e8d8feffff           call 0x42f290
// 0042f3b8  83c410               add esp, 0x10
// 0042f3bb  68bd800000           push 0x80bd
// 0042f3c0  8bcb                 mov ecx, ebx
// 0042f3c2  e899ea2800           call 0x6bde60
// 0042f3c7  68bd800000           push 0x80bd
// 0042f3cc  53                   push ebx
// 0042f3cd  be10000000           mov esi, 0x10
// 0042f3d2  bf940c8100           mov edi, 0x810c94
// 0042f3d7  e8b4feffff           call 0x42f290
// 0042f3dc  68bd800000           push 0x80bd
// 0042f3e1  53                   push ebx
// 0042f3e2  be20000000           mov esi, 0x20
// 0042f3e7  e8a4feffff           call 0x42f290
// 0042f3ec  83c410               add esp, 0x10
// 0042f3ef  68bc800000           push 0x80bc
// 0042f3f4  8bcb                 mov ecx, ebx
// 0042f3f6  e865ea2800           call 0x6bde60
// 0042f3fb  68bc800000           push 0x80bc
// 0042f400  53                   push ebx
// 0042f401  be10000000           mov esi, 0x10
// 0042f406  bf880c8100           mov edi, 0x810c88
// 0042f40b  e880feffff           call 0x42f290
// 0042f410  68bc800000           push 0x80bc
// 0042f415  53                   push ebx
// 0042f416  be20000000           mov esi, 0x20
// 0042f41b  e870feffff           call 0x42f290
// 0042f420  83c410               add esp, 0x10
// 0042f423  68ba800000           push 0x80ba
// 0042f428  8bcb                 mov ecx, ebx
// 0042f42a  e831ea2800           call 0x6bde60
// 0042f42f  68ba800000           push 0x80ba
// 0042f434  53                   push ebx
// 0042f435  be10000000           mov esi, 0x10
// 0042f43a  bf780c8100           mov edi, 0x810c78
// 0042f43f  e84cfeffff           call 0x42f290
// 0042f444  68ba800000           push 0x80ba
// 0042f449  53                   push ebx
// 0042f44a  be20000000           mov esi, 0x20
// 0042f44f  e83cfeffff           call 0x42f290
// 0042f454  83c410               add esp, 0x10
// 0042f457  68b9800000           push 0x80b9
// 0042f45c  8bcb                 mov ecx, ebx
// 0042f45e  e8fde92800           call 0x6bde60
// 0042f463  68b9800000           push 0x80b9
// 0042f468  53                   push ebx
// 0042f469  be10000000           mov esi, 0x10
// 0042f46e  bf640c8100           mov edi, 0x810c64
// 0042f473  e818feffff           call 0x42f290
// 0042f478  68b9800000           push 0x80b9
// 0042f47d  53                   push ebx
// 0042f47e  be20000000           mov esi, 0x20
// 0042f483  e808feffff           call 0x42f290
// 0042f488  83c410               add esp, 0x10
// 0042f48b  5f                   pop edi
// 0042f48c  5e                   pop esi
// 0042f48d  5b                   pop ebx
// 0042f48e  c3                   ret 

struct ImageManager {
    void RemoveIcon(unsigned int id);
};

extern void __cdecl SetIcon(ImageManager*, unsigned int, const char*, int);

void __cdecl InitializeIcons(ImageManager* manager)
{
    manager->RemoveIcon(0x80BB);
    SetIcon(manager, 0x80BB, "stop", 16);
    SetIcon(manager, 0x80BB, "stop", 32);

    manager->RemoveIcon(0x80BD);
    SetIcon(manager, 0x80BD, "refresh_doc", 16);
    SetIcon(manager, 0x80BD, "refresh_doc", 32);

    manager->RemoveIcon(0x80BC);
    SetIcon(manager, 0x80BC, "home_brown", 16);
    SetIcon(manager, 0x80BC, "home_brown", 32);

    manager->RemoveIcon(0x80BA);
    SetIcon(manager, 0x80BA, "arrowleft_green", 16);
    SetIcon(manager, 0x80BA, "arrowleft_green", 32);

    manager->RemoveIcon(0x80B9);
    SetIcon(manager, 0x80B9, "arrowright_green", 16);
    SetIcon(manager, 0x80B9, "arrowright_green", 32);
}
