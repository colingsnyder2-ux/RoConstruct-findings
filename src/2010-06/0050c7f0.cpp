// from server: 68% by atomic.potato
struct Node
{
    Node* field0;
    Node* field4;
    Node* field8;
};

struct S
{
    Node* head;
    void f(Node* value);
};

void S::f(Node* value)
{
    Node* p = value;
    if (p->field8 != 0)
    {
        p = p->field8;
        this->head = p;
        if (p->field4 == 0)
            return;
        do
        {
            Node* q = this->head;
            Node* r = q->field4;
            this->head = r;
            if (r->field4 == 0)
                return;
        } while (true);
    }
    Node* q = reinterpret_cast<Node*>(reinterpret_cast<unsigned>(p->field0) & 0xfffffffe);
    if (p == q->field8)
    {
        do
        {
            this->head = q;
            q = reinterpret_cast<Node*>(reinterpret_cast<unsigned>(q->field0) & 0xfffffffe);
        } while (this->head == q->field8);
    }
    if (this->head->field8 != q)
        this->head = q;
}
