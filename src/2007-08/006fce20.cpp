// from server: 81% by colin
// roc 2007-08 006fce20  unit: CXTPPropertyGridInplaceList  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fce20
//
// 006fce20  56                   push esi
// 006fce21  8bf1                 mov esi, ecx
// 006fce23  e81634f3ff           call 0x63023e
// 006fce28  6a00                 push 0
// 006fce2a  e81159f8ff           call 0x682740
// 006fce2f  8b06                 mov eax, dword ptr [esi]
// 006fce31  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 006fce37  83c404               add esp, 4
// 006fce3a  8bce                 mov ecx, esi
// 006fce3c  ffd2                 call edx
// 006fce3e  8b06                 mov eax, dword ptr [esi]
// 006fce40  8b5068               mov edx, dword ptr [eax + 0x68]
// 006fce43  8bce                 mov ecx, esi
// 006fce45  ffd2                 call edx
// 006fce47  5e                   pop esi
// 006fce48  c20400               ret 4

struct CXTPPropertyGridInplaceList {
    void sub_63023e();
    void sub_682740(int);
    void sub_160();
    void sub_68();
    void func_006fce20(int);
};

void CXTPPropertyGridInplaceList::func_006fce20(int)
{
    sub_63023e();
    sub_682740(0);
    (this->*(*(void (CXTPPropertyGridInplaceList::**)(void))((char*)this + 0x160)))();
    (this->*(*(void (CXTPPropertyGridInplaceList::**)(void))((char*)this + 0x68)))();
}
