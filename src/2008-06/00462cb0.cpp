// from server: 71% by king_originala
struct Text;
extern const char *(__thiscall *TextData)(const Text *);
extern void (__thiscall *DestroyText)(Text *);
extern "C" unsigned long __stdcall GetFileAttributesA(const char *);

struct Text {
    char *data;
    operator const char *() const throw();
    ~Text() throw();
};

inline Text::operator const char *() const throw()
{
    return TextData(this);
}

inline Text::~Text() throw()
{
    DestroyText(this);
}

struct File {
    virtual void Slot0();
    virtual void Slot1();
    virtual void Slot2();
    virtual void Slot3();
    virtual void Slot4();
    virtual void Slot5();
    virtual void Slot6();
    virtual void Slot7();
    virtual Text GetName();
    virtual void Slot9();
    virtual void Slot10();
    virtual void Slot11();
    virtual void Slot12();
    virtual void Slot13();
    virtual void Slot14();
    virtual unsigned int Read(void *, unsigned int);
    virtual void Write(const void *, unsigned int);
};

struct Archive {
    char padding0[24];
    unsigned int flags;
    char padding1[8];
    File *file;
};

struct TextRange {
    int first;
    int last;
    char *text;
};

struct Control {
    char padding[132];
    void Clear(int);
    void SetUndoCollection(int, int);
    void AddText(int, const char *, int);
    int GetLength(int);
    int GetTextRange(TextRange *, int);
    void SetReadOnly(int, int);
    void EmptyUndoBuffer(int);
    void SetSavePoint(int);
    void SetSelection(int, int);
};

struct View {
    char padding[88];
    Control control;
    int useFileAttributes;
    void Serialize(Archive *);
};

void View::Serialize(Archive *archive)
{
    char buffer[4096];
    Control *ctrl = &control;
    if (archive->flags & 1) {
        ctrl->Clear(1);
        ctrl->SetUndoCollection(0, 1);
        File *file = archive->file;
        for (;;) {
            unsigned int count = file->Read(buffer, 4096);
            if (!count)
                break;
            ctrl->AddText(count, buffer, 1);
        }

        bool readOnly = useFileAttributes &&
            (GetFileAttributesA(file->GetName()) & 1);

        if (readOnly)
            ctrl->SetReadOnly(1, 1);
        else
            ctrl->SetReadOnly(0, 1);
        ctrl->SetUndoCollection(1, 1);
        ctrl->EmptyUndoBuffer(1);
        ctrl->SetSavePoint(1);
        ctrl->SetSelection(0, 1);
    } else {
        int length = ctrl->GetLength(1);
        File *file = archive->file;
        int offset = 0;
        int remaining = length;
        while (offset < length) {
            int count = remaining;
            if (count > 4095)
                count = 4095;
            TextRange range;
            range.text = buffer;
            range.first = offset;
            range.last = offset + count;
            ctrl->GetTextRange(&range, 1);
            file->Write(buffer, count);
            remaining -= 4095;
            offset += 4095;
        }
    }
}
