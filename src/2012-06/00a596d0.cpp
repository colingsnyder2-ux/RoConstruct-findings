// from server: 74% by atomic.potato
struct CXTPPropertyGridInplaceEdit {
    int OnEditMessage(void* pMsg);
};

extern "C" int __cdecl sub_00a995ba(void* pMsg);
extern int sub_00a59030(CXTPPropertyGridInplaceEdit* self, void* pMsg);

int CXTPPropertyGridInplaceEdit::OnEditMessage(void* pMsg)
{
    if (*(int*)((char*)pMsg + 4) == 0x100) {
        if (sub_00a995ba(pMsg)) {
            return 1;
        }
    }
    return sub_00a59030(this, pMsg);
}
