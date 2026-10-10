// from server: 75% by colin
struct CXTPControlSelector {
    int GetCount();
    char GetCharAt(int index);
    void SetSelected(int index, int selected);
};

void ProcessAccelerators(CXTPControlSelector* self)
{
    int i = 0;
    while (i < self->GetCount())
    {
        if (self->GetCharAt(i) == '&')
        {
            if (i == self->GetCount() - 1 || self->GetCharAt(i + 1) != '&')
            {
                self->SetSelected(i, 1);
            }
        }
        i++;
    }
}
