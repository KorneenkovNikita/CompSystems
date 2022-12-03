struct DoublyLinkedList {
    struct Node* Head;
    struct Node* Tail;
};

struct Node {
    int Value;
    struct Node* Next;
    struct Node* Previous;
};

typedef struct DoublyLinkedList DoublyLinkedList;
typedef struct Node Node;

//�������� ����������� ������
DoublyLinkedList* CreateNewList(void);

//�������� �� ������� ������
unsigned ListIsEmpty(DoublyLinkedList*);

//������� �������� � ������
void InsertFirstElement(DoublyLinkedList*, int);

//������� �������� � �����
void InsertLastElement(DoublyLinkedList*, int);

//������� �������� �� ������������� ��������
void InsertBeforeElement(DoublyLinkedList*, Node*, int key);

//������� �������� ����� ������������� ��������
void InsertAfterElement(DoublyLinkedList*, Node*, int key);

//�������� ���� ��������
void Show(Node*);

//������� ������� �� ������
void RemoveNode(Node*);

//������� ������� � ������ ������
void RemoveHeadElement(DoublyLinkedList*);

//������� ������� � ����� ������
void RemoveTailElement(DoublyLinkedList*);

//������� ��� �������� ������ �� ������ �� �����
void PrintList(DoublyLinkedList*);