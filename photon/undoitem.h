#ifndef UNDOITEM_H
#define UNDOITEM_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>

class UndoItem : public QWidget {
    Q_OBJECT
private:
    QLabel * m_iconLabel = nullptr;
    QLabel * m_textLabel = nullptr;

    QString activeColor = "#2b95cc";
    QString inactiveColor = "#444444";
public:

    UndoItem(QWidget * parent, const QPixmap &icon, QString &&text, bool isActive = false);

    void setActive(bool val);
};

#endif // UNDOITEM_H
