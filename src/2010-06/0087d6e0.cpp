// from server: 73% by atomic.potato
struct CXTPPropertyGridInplaceEdit {
    int OnEditMessage(void* pMsg);
    int sub_87D040(void* pMsg);
};

extern "C" int __cdecl sub_97CDC6(void* pMsg);

int CXTPPropertyGridInplaceEdit::OnEditMessage(void* pMsg) {
    if (*(int*)((char*)pMsg + 4) == 0x100) {
        if (sub_97CDC6(pMsg)) {
            return 1;
        }
    }
    return sub_87D040(pMsg);
}
