// from server: 57% by colin
// roc 2007-08 00661930  unit: PAVCXTPReportRecord::?$CArray  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661930
//
// 00661930  53                   push ebx
// 00661931  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00661935  56                   push esi
// 00661936  57                   push edi
// 00661937  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0066193b  6a01                 push 1
// 0066193d  8bf1                 mov esi, ecx
// 0066193f  57                   push edi
// 00661940  53                   push ebx
// 00661941  8d4e20               lea ecx, [esi + 0x20]
// 00661944  e8079ffdff           call 0x63b850
// 00661949  53                   push ebx
// 0066194a  8bce                 mov ecx, esi
// 0066194c  897750               mov dword ptr [edi + 0x50], esi
// 0066194f  e8ccfeffff           call 0x661820
// 00661954  5f                   pop edi
// 00661955  5e                   pop esi
// 00661956  5b                   pop ebx
// 00661957  c20800               ret 8

struct CXTPReportRecord;

struct CXTPReportRecords
{
    char pad[0x20];
    void Add(CXTPReportRecord* rec, int flag);
};

struct CXTPReportRecord
{
    char pad[0x50];
    CXTPReportRecords* m_pRecords;
};

struct CXTPReportRecordArray
{
    void Insert(CXTPReportRecord* rec, int index);
};

struct CXTPReportControl
{
    char pad[0x20];
    CXTPReportRecords m_records;
    void AddRecord(CXTPReportRecord* rec, int flag);
};

void CXTPReportRecords::Add(CXTPReportRecord* rec, int flag)
{
    CXTPReportRecordArray* arr = (CXTPReportRecordArray*)((char*)this + 0x20);
    arr->Insert(rec, flag);
}

void CXTPReportControl::AddRecord(CXTPReportRecord* rec, int flag)
{
    m_records.Add(rec, 1);
    rec->m_pRecords = &m_records;
    CXTPReportRecordArray* arr = (CXTPReportRecordArray*)((char*)this + 0x20);
    arr->Insert(rec, flag);
}
