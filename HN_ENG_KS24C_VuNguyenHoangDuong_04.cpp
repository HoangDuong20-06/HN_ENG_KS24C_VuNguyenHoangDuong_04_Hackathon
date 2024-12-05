#include<stdio.h>
int main(){
	int arr[100];
	int choice,n,pos,value,key,j;
	do{
		printf("MENU\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra cac gia tri phan tu trong mang theo dang mang 1 chieu\n");
		printf("3. Dem so luong cac so hoan hao co trong mang\n");
		printf("4. Tim gia tri lon thu 2 trong mang, khong duoc sap xep mang\n");
		printf("5. Them mot phan tu vao vi tri ngau nhien trong  mang, phan tu moi them vao mang va vi tri them vao phai do nguoi dung nhap vao\n");
		printf("6. Xoa phan tu tai mot vi tri cu the(nguoi dung nhap vi tri xoa)\n");
		printf("7. Sap xep mang theo thu tu tang dan(Insertion sort)\n");
		printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khont(Binary search)\n");
		printf("9. Sap xep lai mang va hien thi ra toan bo phan tu  co trong mang sao cho toan bo so chan dung truoc, so le dung sau\n");
		printf("10. Dao thuoc thu tu cua cac phan tu co trong mang\n");
		printf("11. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				printf("Nhap kich thuoc mang: ");
				scanf("%d",&n);
				printf("Nhap cac gia tri cho mang\n");
				for(int i = 0; i<n; i++){
					printf("arr[%d]=",i);
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
				printf("Cac gia tri trong mang\n");
				for(int i = 0; i<n; i++){
					printf("arr[%d]= %d\n",i,arr[i]);
		        }
		        break;
		    case 3:
		    	break;
		    case 4:
		    	break;
		    case 5:
		    	printf("Nhap vi tri muon them: ");
		    	scanf("%d",&pos);
		    	printf("Nhap gia tri muon them: ");
		    	scanf("%d",&value);
		    	if(pos < 0 || pos > n){
		    		printf("Vi tri khong hop le");
				}else{
					for(int i = n; i >= pos; i--){
						arr[i]=arr[i-1];
					}
				 arr[pos]=value;
			    }
				 n++;
		    	break;
		    case 6:
		    	printf("Nhap vi tri muon xoa: ");
		    	scanf("%d",&pos);
		    	if(pos < 0 || pos >= n){
		    		printf("Vi tri khong hop le");
				}else{
					for(int i = pos; i < n-1; i++){
						arr[i]=arr[1+i];
					}
				 n--;	
				}
		    	break;
		    case 7:
		    	for(int i = 0; i<n; i++){
		    		key=arr[i];
		    		j = i-1;
		    		for( j= i-1;j >= 0&&arr[j]>=key; j--){
		    		   arr[j+1]=arr[j];
					}
					arr[j+1]=key;
				}
				printf("Cac gia tri sau khi duoc sap xep: \n");
				for(int i = 0; i<n; i++){
					printf("arr[%d]= %d\n",i,arr[i]);
			    }
		    	break;
		    case 8:
		    	break;
		    case 9:
		    	break;
		    case 10:
		    	printf("Cac gia tri trong mang\n");
				for(int i = n-1; i>=0; i--){
					printf("arr[%d]= %d\n",i,arr[i]);
		        }
		    	break;
		    case 11:
		    	printf("Chuong trinh ket thuc");
		    	break;
		    	default:
		    	printf("Lua chon khong hop le\n");
	    }
    }while(choice!=11);
	return 0;
}
