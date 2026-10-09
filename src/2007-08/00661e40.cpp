// from server: 25% by colin
// roc 2007-08 00661e40  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661e40

extern "C" void* __cdecl sub_654d90(unsigned int size);
extern "C" void __fastcall sub_661d90(void* p);

struct CXTPReportRecordItemArray
{
    void* Construct();
};

void* CXTPReportRecordItemArray::Construct()
{
    void* p = sub_654d90(0x54);
    if (p != 0)
    {
        sub_661d90(p);
    }
    return p;
}
